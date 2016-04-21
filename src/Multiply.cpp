/*
 * Multiply.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Multiply.h"

#include <cstdlib>
#include <iostream>
#include <iterator>
#include <sstream>
#include <vector>
#include <string>


void Multiply::evaluate() {
	// Using 1 as neutral for multiplication
	float realResult = 1;
	float tempResult = 0;
	for (std::vector<Expression*>::iterator it = arguments.begin();
			it != arguments.end(); ++it) {
		// Go over my arguments, evaluate and get their results
		std::stringstream ss2;
		(*it)->evaluate();
		ss2 << (*it)->getResult();
		ss2 >> tempResult;
		realResult *= tempResult;
	}
	// Get the float result as a string
	std::stringstream ss;
	ss << realResult;
	result = ss.str();
}

Multiply::~Multiply() {
}

std::string Multiply::getResult() {
	return result;
}
