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

#define SPACE_STRING " "
#define SPACE_CHAR ' '
#define OPENING_PARENTHESIS_STRING "("
#define CLOSING_PARENTHESIS_STRING ")"
#define OPENING_PARENTHESIS_CHAR '('
#define CLOSING_PARENTHESIS_CHAR ')'

Append::~Append() {
}

std::string& Append::getResult() {
	return result;
}

void Append::evaluate() {
	// My arguments are one or many lists
	std::stringstream partialResult;
	for (std::vector<Expression*>::iterator it = arguments.begin();
			it != arguments.end(); ++it) {
		// Go over my arguments and append their results
		unsigned int counter = 1;
		(*it)->evaluate();
		std::string test = (*it)->getResult();
		partialResult << (*it)->getResult();
		if (counter != arguments.size())
			partialResult << SPACE_STRING;
		++counter;
	}
	// Preapare result and flatten it
	result = partialResult.str();
	flatten();
}

void Append::flatten() {
	std::stringstream partialResult;
	partialResult << OPENING_PARENTHESIS_STRING;
	// Remove opening and closing parenthesis matches
	for (unsigned int i = 0; i < result.length(); ++i) {
		if (result.at(i) == OPENING_PARENTHESIS_CHAR
				|| result.at(i) == CLOSING_PARENTHESIS_CHAR) {
			result.erase(i, sizeof(char));
			--i; // Re adapt size
		}
	}
	// Delete opening and closing spaces if any
	if (result.at(0) == SPACE_CHAR)
		result.erase(0, sizeof(char));
	if (result.at(result.size() - 1) == SPACE_CHAR)
		result.erase(result.size() - 1, sizeof(char));
	partialResult << result << CLOSING_PARENTHESIS_STRING;
	result = partialResult.str();
}
