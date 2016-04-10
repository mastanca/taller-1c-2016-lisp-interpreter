/*
 * Constant.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: mastanca
 */

#include "Constant.h"

#include <iostream>
#include <sstream>
#include <string>

Constant::~Constant() {
}

int Constant::getValue() const {
	return value;
}

void Constant::evaluate() {
}

std::string Constant::numberToString ( int number ){
	std::stringstream ss;
	ss << number;
	return ss.str();
}
