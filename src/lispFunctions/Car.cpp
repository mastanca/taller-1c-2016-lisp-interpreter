/*
 * Car.cpp
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#include "Car.h"

Car::~Car() {
}

std::string Car::getResult() {
	return result;
}

void Car::evaluate() {
	// Car should only get a list as input so if arguments has more than one
	// element something is wrong and we will return ""
	if (arguments.size() > 1 || arguments.size() == 0){
		result = "";
	} else {
		// My arguments are only lists so we can treat them as functions to
		// get their arguments
		Expression* firstArg = ((Function*)(getArguments().front()))->getArguments().front();
		firstArg->evaluate();
		result = firstArg->getResult();
	}
}