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
		for (int i = 0; i < YEARS; i++) {
			for (int j = 0; j < TOTALCODES; j++) {
				stateData[i].dataByCode[j] = 0;
			}
		}
		for (int i = 0; i < YEARS / 10; i++) {
			population[i] = 1;
		}

	}


	void setState(int s) {
		state = s;
	}

	void setPopulation(int i, int pop) {

		population[i] = pop;
	}
	int getPopulation(int i) {
		return population[i];
	}

	//Adding a single data point to the array at [year] and [dataByCode]
	void addData(int year, int code, double dataToAdd) {

		stateData[year - 1960].dataByCode[code] = dataToAdd;
	}

	double getData(int year, int code) {
		return stateData[year - 1960].dataByCode[code];
	}

private:
	yearData stateData[YEARS];
	int population[(YEARS / 10) + 1];
	int state; //(State is an int because state is an ENUM)
};



#endif // !STATE_H

