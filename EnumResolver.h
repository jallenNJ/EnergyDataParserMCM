#ifndef ENUM_RESOLVER_H
#define ENUM_RESOLVER_H
#include "Enums.h"
#include <string>
#include <iostream>

//This class allows the code to access convertions between enum and natural input
class EnumResolver {
public:
	EnumResolver(){

	}

	int codeNameToEnum(std::string);
	int stateNameToEnum(std::string);
	std::string stateEnumToName(int);
	std::string codeEnumToName(int);

private:
	
};

#endif // !ENUM_RESOLVER_H
