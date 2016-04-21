/*
 * Constant.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: mastanca
 */

#include "Constant.h"

#include <sstream>
#include <string>

Constant::~Constant() {
}

std::string& Constant::getResult() {
	std::stringstream ss;
	ss << value;
	result = ss.str();
	return result;
}

void Constant::evaluate() {
}

std::string Constant::numberToString(int number){
	std::stringstream ss;
	ss << number;
	return ss.str();
}
