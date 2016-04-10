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

Sum::~Sum() {
}

void Sum::evaluate() {
	realResult = 0;
	float tempResult = 0;
	for (std::vector<Expression*>::iterator it = arguments.begin() ; it != arguments.end(); ++it){
		(*it)->evaluate();
		tempResult = atof(((*it)->getResult()).c_str());
		realResult += tempResult;
	}
	std::stringstream ss;
	ss << realResult;
	result = ss.str();
}

std::string Sum::getResult() {
	return result;
}
