/*
 * Divide.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Divide.h"

#include <iostream>
#include <iterator>
#include <vector>

#include "../Constant.h"

void Divide::evaluate() {
	float tempResult;
	for (std::vector<Expression*>::iterator it = arguments.begin() ; it != arguments.end(); ++it){
		tempResult = 0;
		(*it)->evaluate();
		tempResult = ((Constant*)*it)->getValue();
		if (result == 0){
			result = tempResult;
		} else {
			result /= tempResult;
		}
	}
	std::cout << result;
}

Divide::~Divide() {
}

float Divide::getResult() const {
	return result;
}

