/*
 * List.cpp
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#include "List.h"

#include <sys/types.h>
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
	uint argc = arguments.size();
	// Remember from constructor that lists are initialized with result "()"
	if (argc > 0){
		std::stringstream partialResult;
		for (std::vector<Expression*>::iterator it = arguments.begin() ; it != arguments.end(); ++it){
			// Ok args, evaluate and give me your results
			(*it)->evaluate();
			partialResult << (*it)->getResult();
			--argc;
			if (argc != 0)
				partialResult << SPACE;
		}
		result = "(" + partialResult.str() + ")";
	}
}
