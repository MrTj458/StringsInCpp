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
	cout << str << endl;

	//Length
	cout << str.length() << endl;

	//At
	cout << str.at(4) << endl;

	//Empty
	if(str.empty())
	{
		cout << "The string is empty." << endl;
	}
	else
	{
		cout << "The string is NOT empty." << endl;
	}

	//Substring
	cout << str.substr(2, 7) << endl;

	cout << str.substr(3) << endl;

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



