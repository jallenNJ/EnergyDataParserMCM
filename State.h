#ifndef STATE_H
#define STATE_H
#include "Constants.h"
#include <iostream>



//REMINDER: Turn struct into type def later
//typedef double yearData;
struct yearData {
	double dataByCode[TOTALCODES];
	int year;
	int state;
};
class State {

public:
	State() {
		//Initializing all values in the dataByCode arrays to 0
		std::cout << "Starting state intilization" << std::endl;
		for (int i = 0; i < YEARS; i++) {
			for (int j = 0; j < TOTALCODES; j++) {
				stateData[i].dataByCode[j] = 0;
			}
		}
		std::cout << "Done" << std::endl;
	}
	State(int s) {
		//Initializing all values in the dataByCode arrays to 0
		std::cout << "Starting state intilization" << std::endl;
		for (int i = 0; i < YEARS; i++) {
			for (int j = 0; j < TOTALCODES; j++) {
				stateData[i].dataByCode[j] = 0;
			}
		}
		std::cout << "Done" << std::endl;
	}

	void setState(int s) {
		state = s;
	}

	//Adding a single data point to the array at [year] and [dataByCode]
	void addData(int year, int code, double dataToAdd) {
		if (code > 550) {
			std::cout << "Adding " << dataToAdd << " to code " << code << " at year " << year << " to state " << state << std::endl;
		}

		stateData[year - 1960].dataByCode[code] = dataToAdd;
	}

	double getData(int year, int code) {
		return stateData[year - 1960].dataByCode[code];
	}

private:
	yearData stateData[YEARS];
	int state; //(State is an int because state is an ENUM)
};



#endif // !STATE_H

