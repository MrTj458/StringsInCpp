/*
 * StringController.h
 *
 *  Created on: Jan 25, 2016
 *      Author: thod0127
 */
#include <string>;
#include <iostream>;
using namespace std;
#ifndef CONTROLLER_STRINGCONTROLLER_H_
#define CONTROLLER_STRINGCONTROLLER_H_

class StringController
{
private:
	string str;
public:
	StringController();
	void start();
	void stringLength();
	void stringAt();
	void stringEmpty();
	void stringSubstr();
	void stringCompare();
};

#endif /* CONTROLLER_STRINGCONTROLLER_H_ */
