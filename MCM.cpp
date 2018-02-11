#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Constants.h"
#include "Enums.h"
#include "State.h"
#include "EnumResolver.h"
#include "InputHandler.h"



void readInFile(State*);
void readInPopulation(State*);

using namespace std;
int main() {
	
	
	EnumResolver em;
	State allStates[STATES]; //Declaring allStates, and instance of the States class, with the size of STATES
							 //Assigning the states to their ENUM
	for (int i = 0; i < STATES; i++) {
		allStates[i].setState(i);
	}

	cout << "Loading in files..." << endl;
	readInFile(allStates);
	readInPopulation(allStates);
	cout << "All files loaded" << endl;
	string buff = "";
	InputHandler user(allStates);
	while (true) {
		buff = "";
		cout << "Enter command to run" << endl;
		//cin >> buff;
		getline(cin, buff);
		user.parseInput(buff);	

	}


	//allStates[em.stateNameToEnum("TX")].getData(1983, codeNameToEnum("AVTCB"));
	system("pause");
	return 0;
}


void readInFile(State* allStates) {


	ifstream dataReader;
	dataReader.open("data.txt");
	//Ensure file is open
	if (!dataReader) {
		cerr << "Failed to open";
		system("pause");
		exit(-1);
	}
	EnumResolver em;
	string lineBuff = "";			//Buffer for the current line of the file
	string buff = "";				//Buffer for the current token

		//The Code for the current line
	bool lookingForPeriod = true;	//Flag for if the token found
	
	//Skip the first line
	getline(dataReader, lineBuff);
	lineBuff = "";

	string previousCode = "ABICB";//FIRSTCODE;
	int i = 0;
	int state = 0;
	while (!dataReader.eof()) {

		getline(dataReader, lineBuff);
		if (lineBuff == "") {
			continue;
		}
		istringstream parser(lineBuff);
		parser >> buff; //Code

		//See if we are reading a different code than last time
		if (previousCode != buff) {
			previousCode = buff; //Save the last code
			i++;	//Increment offset
			if (i >= TOTALCODES) { //If we exceed amount of enums
				cerr << "MORE CODES THAN ENUMS IN FILE READING" << endl;
				system("pause");
				exit (-4);
			}
		}

		parser >> buff;	//STATE
		//Get enum for the state
		state = em.stateNameToEnum(buff);

		parser >> buff;	//year
		int year = stoi(buff);
		parser >> buff;	//Data
		allStates[state].addData(year, i, stod(buff));

	}


}

void readInPopulation(State* allStates) {
	ifstream dataReader;
	dataReader.open("population.txt");
	//Ensure file is open
	if (!dataReader) {
		cerr << "Failed to open";
		system("pause");
		exit(-1);
	}
	EnumResolver em;				//Access Enums
	string lineBuff = "";			//Buffer for the current line of the file
	string buff = "";				//Buffer for current token

	int dataPoints = YEARS / 10;	//Amount of entries
	int currentState = 0;			//Int of current state to add to

	while (!dataReader.eof()) {
		buff = "";				//Set buff to blank (So new lines don't break reading)
		//Get line
		getline(dataReader, lineBuff);
		istringstream parser(lineBuff);
		parser >> buff; 

		//If empty, its an empty line, if value, its a header for a state
		if (buff == "") {
			continue;
		}
		currentState = em.stateNameToEnum(buff);

		for (int i = (YEARS / 10); i >= 0; i--) { //Load in populatin data for the state, newest first
			getline(dataReader, lineBuff);
			istringstream parser(lineBuff);
			parser >> buff;
			parser >> buff;
			allStates[currentState].setPopulation(i, stoi(buff));
		}


	}

}