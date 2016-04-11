/*
 * List.cpp
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#include "List.h"

#include <iterator>
#include <sstream>
#include <string>
#include <vector>

#define SPACE " "

List::~List() {
}

std::string List::getResult() {
	return result;
}

void List::evaluate() {
	// Remember from constructor that lists are initialized with result ""
	if (arguments.size() > 0){
		std::stringstream partialResult;
		for (std::vector<Expression*>::iterator it = arguments.begin() ; it != arguments.end(); ++it){
			// Ok args, evaluate and give me your results
			(*it)->evaluate();
			partialResult << (*it)->getResult() << SPACE;
		}
		result = partialResult.str();
	}
}
