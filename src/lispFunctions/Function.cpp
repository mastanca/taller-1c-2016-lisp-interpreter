/*
 * Function.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Function.h"


Function::~Function() {
}

std::vector<Expression*>& Function::getArguments() {
	return arguments;
}

void Function::appendArgument(Expression* argument) {
	arguments.push_back(argument);
}
