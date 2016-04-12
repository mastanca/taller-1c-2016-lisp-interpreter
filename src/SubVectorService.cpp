/*
 * SubVectorService.cpp
 *
 *  Created on: Apr 10, 2016
 *      Author: mastanca
 */

#include "SubVectorService.h"

#include <string>
#include <vector>

std::vector<std::string> SubVectorService::run(std::vector<std::string>* vector,
		uint offset) {
	bool quit = false;
	for (std::vector<std::string>::iterator it = vector->begin() + offset;
			it != vector->end() && !quit; ++it) {
		if (*it == "(") {
			++openingParenthesisCount;
		} else if (*it == ")") {
			++closingParenthesisCount;
		}
		if ((closingParenthesisCount - openingParenthesisCount) == 1) {
			closingOnePosition = counter;
			quit = true;
		}
		++counter;
	}
	// Up to here we have the position of the levels closing parenthesis
	std::vector<std::string> newVec(vector->begin() + offset,
			vector->begin() + offset + closingOnePosition + 1);
	return newVec;
}

SubVectorService::~SubVectorService() {
}

