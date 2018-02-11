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

using namespace std;
int main() {
	
	
	EnumResolver em;
	State allStates[STATES]; //Declaring allStates, and instance of the States class, with the size of STATES
							 //Assigning the states to their ENUM
	for (int i = 0; i < STATES; i++) {
		allStates[i].setState(i);
	}
	readInFile(allStates);
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

	int lineCount = 0;				//Amount of lines read
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
		lineCount++;

	}

	cout << "Read " << lineCount << "lines";

}
