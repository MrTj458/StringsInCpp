/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: thod0127
 */

#include "StringController.h"
#include <iostream>;
#include <string>;
using namespace std;

StringController::StringController()
{
	str = "Hello!";
}

void StringController :: start()
{
	cout << "The current string is: " << str << endl;

	stringLength();
	stringEmpty();
	stringAt();
	stringSubstr();
	stringCompare();
}

void StringController :: stringLength()
{
	//Length
	cout << "The length of the string is: " << str.length() << endl;
}

void StringController :: stringEmpty()
{
	//Empty
	if(!str.empty())
	{
		cout << "The string contains characters" << endl;
	}
	else
	{
		cout << "The string does not contain any characters." << endl;
	}
}

void StringController :: stringAt()
{
	//At
	cout << "The character in the fourth position is: " << str.at(4) << endl;
}

void StringController :: stringSubstr()
{
	//Substring
	cout << "The characters between the second and fifth spots are: " << str.substr(2, 5) << endl;

	cout << "The characters after the third slot are: " << str.substr(3) << endl;
}

void StringController :: stringCompare()
{
	//Compare
	cout << "Please enter a string: " << endl;
	string string1;
	cin >> string1;

	cout << "Please enter another string: " << endl;
	string string2;
	cin >> string2;

	if(!string1.compare(string2))
	{
		cout << "The strings match!" << endl;
	}
	else
	{
		cout << "The strings don't match!" << endl;
	}
}
