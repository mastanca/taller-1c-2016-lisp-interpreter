/*
 * Function.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Function.h"


Function::~Function() {
}

const std::vector<Expression*>& Function::getArguments() const {
	return arguments;
}

void Function::appendArgument(Expression* argument) {
	arguments.push_back(argument);
}

//void Function::parseBody(std::vector<std::string> subLine) {
//	for (std::vector<std::string>::iterator it = subLine.begin() ; it != subLine.end(); ++it){
//		if (*it != ")")
//	}
//}
