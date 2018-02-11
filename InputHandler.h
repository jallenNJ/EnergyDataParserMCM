#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H
#include"Enums.h"
#include "EnumResolver.h"
#include "State.h"
#include <sstream>
#include <fstream>
class InputHandler {
public:
	InputHandler() {};
	InputHandler(State* aStates) {
		allStates = aStates;

	}


	double* parseInput(string userInput);
private:
	EnumResolver em;
	State* allStates;
	double* getDataRange(int, int, int, int, int);
	double* normilizeData(int, int, int, int, int);
	void runScript();
};


#endif // !INPUT_HANDLER_H
