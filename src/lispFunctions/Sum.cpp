/*
 * Sum.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Sum.h"

#include <iostream>
#include <iterator>
#include <vector>

#include "../Constant.h"


void Sum::evaluate() {
	int tempResult;
	for (std::vector<Expression*>::iterator it = arguments.begin() ; it != arguments.end(); ++it){
		tempResult = 0;
		(*it)->evaluate();
		tempResult = ((Constant*)*it)->getValue();
		result += tempResult;
	}
	std::cout << result;
}

Sum::~Sum() {
}

int Sum::getResult() const {
	return result;
}
