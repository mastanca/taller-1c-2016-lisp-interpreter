/*
 * Sum.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Sum.h"

#include <cstdlib>
#include <iostream>
#include <iterator>
#include <sstream>
#include <vector>
#include <string>


Sum::~Sum() {
}

void Sum::evaluate() {
	float realResult = 0;
	float tempResult = 0;
	for (std::vector<Expression*>::iterator it = arguments.begin();
			it != arguments.end(); ++it) {
		// Go over my arguments, evaluate and get their results
		std::stringstream ss2;
		(*it)->evaluate();
		ss2 << (*it)->getResult();
		ss2 >> tempResult;
		realResult += tempResult;
	}
	// Get the float result as a string
	std::stringstream ss;
	ss << realResult;
	result = ss.str();
}

std::string& Sum::getResult() {
	return result;
}
