/*
 * Minus.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Minus.h"

#include <cstdlib>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

void Minus::evaluate() {
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
			// If its the first argument then assign it to the result
			realResult = tempResult;
		} else {
			// Otherwise subtract it
			realResult -= tempResult;
		}
	}
	// Get the float result as a string
	std::stringstream ss;
	ss << realResult;
	result = ss.str();
}

Minus::~Minus() {
}

std::string Minus::getResult() {
	return result;
}

