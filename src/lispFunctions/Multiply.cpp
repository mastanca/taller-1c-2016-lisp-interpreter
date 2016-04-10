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


void Multiply::evaluate() {
	float realResult = 0;
	float tempResult = 0;
	for (std::vector<Expression*>::iterator it = arguments.begin() ; it != arguments.end(); ++it){
		(*it)->evaluate();
		tempResult = atof(((*it)->getResult()).c_str());
		if (realResult == 0){
			realResult = tempResult;
		} else {
			realResult *= tempResult;
		}
	}
	std::stringstream ss;
	ss << realResult;
	result = ss.str();

}

Multiply::~Multiply() {
}

std::string Multiply::getResult() {
	return result;
}

