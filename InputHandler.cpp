#include "InputHandler.h"


using namespace std;

//<Command> [State][args]
//This function parses the raw console input to figure out what the user wants to do
double* InputHandler::parseInput(string userInput) {

	istringstream parser(userInput);
	void* returnVal = NULL;
	string command = "";
	string buff = "";
	parser >> command;
	parser >> buff;
	int stateNum = 0;
	if (buff != "") {
		stateNum = em.stateNameToEnum(buff);
	}
	
	if (command == "datarange") { //Gets a range of data
		int args[3];
		for (int i = 0; i < 3; i++) {
			parser >> buff;
			if (buff == "") {
				cerr << "Invalid args, returning NULL";
				return NULL;
			}
			args[i] = stoi(buff);
		}
		parser >> buff;

		return getDataRange(stateNum, args[0], args[1], args[2], em.codeNameToEnum(buff));
	}
	else if (command == "exit") { //Exits the program
		exit(0);
	}
	else if (command == "script") { //Executes a script
		runScript();
	}
	else if (command == "percap") { //Gets a set of data and normilizes it per capita
		int args[3];
		for (int i = 0; i < 3; i++) {
			parser >> buff;
			if (buff == "") {
				cerr << "Invalid args, returning NULL";
				return NULL;
			}
			args[i] = stoi(buff);
		}
		parser >> buff;
		return normilizeData(stateNum, args[0], args[1], args[2], em.codeNameToEnum(buff));
	} else if (command == "avg") { //Gets a set of data and averages it
		int args[3];
		for (int i = 0; i < 3; i++) {
			parser >> buff;
			if (buff == "") {
				cerr << "Invalid args, returning NULL";
				return NULL;
			}
			args[i] = stoi(buff);
		}
		parser >> buff;
		return averageData(stateNum, args[0], args[1], args[2], em.codeNameToEnum(buff));
	}
	else {
		cerr << "Invalid command" << endl;
		return NULL;
	}


}


void InputHandler::runScript() {
	//Get and open script
	ifstream script;
	script.open("script.txt");
	if (!script) {
		cerr << "Failed to open script" << endl;
		return;
	}
	//Set up output file
	ofstream output;
	output.open("scriptOutput.txt");
	string line = "";
	double * dataReturned = NULL;


	//IDEA: Script instructions on first line? 
	while (!script.eof()) {
		getline(script, line);				//Get the line of data
		dataReturned = parseInput(line);	//  execute based on how it works
		if (dataReturned != NULL) {
			output << "[ ";

			for (int i = 1; i < (int)dataReturned[0]; i++) {
				output << dataReturned[i] << ", ";
			}
			output << " ]\n";

		}
	}



}

double* InputHandler::normilizeData(int state, int startYear, int stopYear, int step, int code) {
	//Get the data
	double * data = getDataRange(state, startYear, stopYear, step, code);
	if (data == NULL) {
		return NULL;
	}

	int arrSize = data[0];


	int yearsTilPopChange = 10 - startYear % 10; //Figure out how long until the nearest year with a census
	int popIndex = (startYear - 1960) / 10;		//Index to the pop array
	double* normData = new double[arrSize];			//Array to store output
	normData[0] = arrSize;							//Cache size of array for when its returned
	double current = 0;
	for (int i = 1; i < arrSize; i++) {
		if (yearsTilPopChange <= 0) {		//If new census, reset counter and incrment index
			yearsTilPopChange = 10;
			popIndex++;
		}
		
		//Get data, get per person, then multiply by 100000
		current = data[i];
		current /= allStates[state].getPopulation(popIndex);
		current *= 100000;
		normData[i] = current;
	}
	return normData;

}

double* InputHandler::getDataRange(int state, int startYear, int stopYear, int step, int code) {
	//Makes sure all values are postive
	if (state < 0 || startYear < 0 || stopYear < 0 || step < 0 || code < 0) {
		cerr << "Invalid entry to get data Range, returning null" << endl;
		cerr << "State:" << state << " startYear: " << startYear << " range:" << stopYear << " step:" << step << " code: " << code <<endl;
		return NULL;
	}
	//Get the range of data and make sure its postive
	int range = stopYear - startYear;
	if (range < 0) {
		cerr << "Stop year before start year, returning NULL";

	}

	//Read in the values
	double * arr = new double[(range / step) +1];
	arr[0] = (range / step)  + 1;
	for (int i = 0, j = 1; i < range; i+= step, j++) {
		arr[j] = allStates[state].getData(startYear + i, code);
	}
	return arr;
}

double* InputHandler::averageData(int state, int startYear, int stopYear, int step, int code) {
	double * data = getDataRange(state, startYear, stopYear, step, code);
	if (data == NULL) {
		return NULL;
	}

	int arrSize = data[0];

	double* result = new double[2];
	double total = 0;
	//Scope block to make the i variable last through the loop, the average, then leave scope
	{
		int i;
		for (i = 1; i < arrSize; i++) {
			total += data[i];
		}
		result[0] = 2;
		result[1] = total / (i -1);
	}
	return result;


}