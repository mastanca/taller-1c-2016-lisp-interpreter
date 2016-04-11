/*
 * Append.cpp
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#include "Append.h"

#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

#define SPACE " "

Append::~Append() {
}

std::string Append::getResult() {
	return result;
}

void Append::evaluate() {
	// My arguments are one or many lists
	std::stringstream partialResult;
	for (std::vector<Expression*>::iterator it = arguments.begin(); it != arguments.end(); ++it){
		// Ill be getting my arguments arguments and appending their results
		std::vector<Expression*> myArgumentArguments = ((Function*)(*it))->getArguments();
		for (std::vector<Expression*>::iterator anotherit = myArgumentArguments.begin(); anotherit != myArgumentArguments.end(); ++anotherit){
			(*anotherit)->evaluate();
			partialResult << (*anotherit)->getResult() << SPACE;
		}
	}
	result = partialResult.str();
}
