#ifndef ENUM_RESOLVER_H
#define ENUM_RESOLVER_H
#include "Enums.h"
#include <string>
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

//Typedef the iterators to something readable
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char>>const, int>>>> stringToEnumIterator;
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const, std::basic_string<char, std::char_traits<char>, std::allocator<char>>>>>> enumToStringIterator;


//This class allows the code to access convertions between enum and natural input
class EnumResolver {
public:
	EnumResolver(){
		intializeMap();
	}

	int codeNameToEnum(std::string);
	int stateNameToEnum(std::string);
	std::string stateEnumToName(int);
	std::string codeEnumToName(int);

private:

	void intializeMap();
	std::map<std::string, int> stringToEnumMap;
	std::map<int, std::string> enumToStringMap;
	
};

#endif // !ENUM_RESOLVER_H
