#include "EnumResolver.h"


void EnumResolver::intializeMap() {
	//Open data and check to make sure file opened
	std::ifstream data;
	data.open("validCodes.txt");
	if (!data) {
		std::cerr << "FATAL ERROR: Failed to open codes, program will exit" << std::endl;
		std::exit(-1);
	}
	
	std::string buff; //Current line
	std::string token; //The code on the line
	int enumValue = 0;	//The value of the associated enum
	while (!data.eof()) {
		//Reset strings
		buff = "";
		token = "";

		//Read in next line, and pull first token.
		data >> buff;
		std::istringstream input(buff);
		input >> token;

		//If empty line, continue
		if (token == "") {
			continue;
		}

		//Add to maps and increment
		stringToEnumMap[token] = enumValue;
		enumToStringMap[enumValue] = token;
		enumValue++;
	}

	//Close the file.
	data.close();

}



int EnumResolver::stateNameToEnum(std::string input) {
	if (input.length() == 2) {
		input[0] = toupper(input[0]);
	}

	if (input == "AZ" || input == "Arizona") {
		return AZ;
	}
	else if (input == "CA") {
		return CA;
	}
	else if (input == "NM") {
		return NM;
	}
	else if (input == "TX") {
		return TX;
	}
	else {
		std::cerr << "INVALID PASS TO STATE NAME TO ENUM, input was " << input << std::endl;
		system("pause");
		exit(-98);

	}

}

std::string EnumResolver::stateEnumToName(int input) {
	switch (input) {
	case AZ:
		return "AZ";
	case CA:
		return "CA";
	case NM:
		return "NM";
	case TX:
		return "TX";
	default:
		std::cerr << "INVALID PASS TO ENUM TO STATE, input was " << input << std::endl;
		system("pause");
		exit(-96);
	}
}


//Take the string of enum and convert to the number
int EnumResolver::codeNameToEnum(std::string input) {
	
	stringToEnumIterator result = stringToEnumMap.find(input);
	if (result == stringToEnumMap.end()) { //If not found

		//No proper errror handling, so exit program
		std::cerr << "INVALID INPUT TO ENUM RESOULTION FUNCTION, input was " << input << std::endl;
		system("pause");
		exit(-99);
	}
	return result->second;

}

//Take the enum value and get the string back
std::string EnumResolver::codeEnumToName(int input) {
	
	enumToStringIterator result = enumToStringMap.find(input);
	if (result == enumToStringMap.end()) { //If not found
		//No proper errror handling, so exit program
		std::cerr << "INVALID ENUM PASSED TO ENUM TO STRING, input " << input << std::endl;
		exit(-97);
	}
	return result->second;

}
