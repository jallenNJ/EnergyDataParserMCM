#ifndef ENUM_RESOLVER_H
#define ENUM_RESOLVER_H
#include "Enums.h"
#include <string>
#include <iostream>
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
