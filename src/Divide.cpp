/*
 * Divide.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Divide.h"

#include <cstdlib>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

void Divide::evaluate() {
	float realResult = 0;
	float tempResult = 0;
	for (std::vector<Expression*>::iterator it = arguments.begin();
			it != arguments.end(); ++it) {
		// Go over my arguments, evaluate and get their results
		std::stringstream ss2;
		(*it)->evaluate();
		ss2 << (*it)->getResult();
		ss2 >> tempResult;
		if (realResult == 0) {
			realResult = tempResult;
		} else {
			realResult /= tempResult;
		}
	}
	// Get the float result as a string
	std::stringstream ss;
	ss << realResult;
	result = ss.str();
}

Divide::~Divide() {
}

std::string Divide::getResult() {
	return result;
}

