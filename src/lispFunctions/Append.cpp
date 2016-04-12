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
		unsigned int counter = 1;
		(*it)->evaluate();
		std::string test = (*it)->getResult();
		partialResult << (*it)->getResult();
		if (counter != arguments.size())
			partialResult << SPACE;
		++counter;
	}
	result = partialResult.str();
	flatten();
}

void Append::flatten() {
	std::stringstream partialResult;
	partialResult << "(";
	for (unsigned int i = 0; i < result.length(); ++i){
		if (result.at(i) == '(' || result.at(i) == ')'){
			result.erase(i, sizeof(char));
			--i; // Re adapt size
		}
	}
	// Delete opening and closing spaces if any
	if (result.at(0) == ' ')
		result.erase(0, sizeof(char));
	if (result.at(result.size() - 1) == ' ')
		result.erase(result.size() - 1, sizeof(char));
	partialResult << result << ")";
	result = partialResult.str();
}
