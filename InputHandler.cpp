#include "InputHandler.h"


using namespace std;

//enter state, start year. range, step, 
//output to console or file?
//return an array of doubles


//add script function

//<Command> [State][args]
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
	


	if (command == "datarange") {
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
	else if (command == "exit") {
		exit(0);
	}
	else if (command == "script") {
		runScript();
	}
	else if (command == "percap") {
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
	}
	else {
		cerr << "Invalid command" << endl;
		return NULL;
	}


}


void InputHandler::runScript() {
	ifstream script;
	script.open("script.txt");
	if (!script) {
		cerr << "Failed to open script" << endl;
		return;
	}
	ofstream output;
	output.open("scriptOutput.txt");
	string line = "";
	double * dataReturned = NULL;
	//IDEA: Script instructions on first line? 
	while (!script.eof()) {
		getline(script, line);
		dataReturned = parseInput(line);
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

	double * data = getDataRange(state, startYear, stopYear, step, code);
	if (data == NULL) {
		return NULL;
	}

	int arrSize = data[0];


	int yearsTilPopChange = 10 - startYear % 10;
	int popIndex = (startYear - 1960) / 10;
	double* normData = new double[arrSize];
	normData[0] = arrSize;
	double current = 0;
	for (int i = 1; i < arrSize; i++) {
		if (yearsTilPopChange <= 0) {
			yearsTilPopChange = 10;
			popIndex++;
		}
		
		current = data[i];
		current /= allStates[state].getPopulation(popIndex);
		current *= 100000;
		normData[i] = current;
	}
	return normData;

}

double* InputHandler::getDataRange(int state, int startYear, int stopYear, int step, int code) {

	if (state < 0 || startYear < 0 || stopYear < 0 || step < 0 || code < 0) {
		cerr << "Invalid entry to get data Range, returning null" << endl;
		cerr << "State:" << state << " startYear: " << startYear << " range:" << stopYear << " step:" << step << " code: " << code <<endl;
		return NULL;
	}
	int range = stopYear - startYear;
	if (range < 0) {
		cerr << "Stop year before start year, returning NULL";

	}
	double * arr = new double[(range / step) +1];
	arr[0] = (range / step)  + 1;
	for (int i = 0, j = 1; i < range; i+= step, j++) {
		arr[j] = allStates[state].getData(startYear + i, code);
	}
	return arr;
}