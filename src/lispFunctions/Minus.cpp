/*
 * Minus.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Minus.h"

#include <iostream>
#include <iterator>
#include <vector>

#include "../Constant.h"

void Minus::evaluate() {
	int tempResult;
	for (std::vector<Expression*>::iterator it = arguments.begin() ; it != arguments.end(); ++it){
		tempResult = 0;
		(*it)->evaluate();
		tempResult = ((Constant*)*it)->getValue();
		if (result == 0){
			result = tempResult;
		} else {
			result -= tempResult;
		}
	}
	std::cout << result;
}

Minus::~Minus() {
}

int Minus::getResult() const {
	return result;
}

