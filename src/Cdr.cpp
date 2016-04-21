/*
 * Cdr.cpp
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#include "Cdr.h"

#include <iterator>
#include <sstream>
#include <string>
#include <vector>

#include "List.h"

#define SPACE " "


Cdr::~Cdr() {
}

std::string& Cdr::getResult() {
	return result;
}

void Cdr::evaluate() {
	// Im much like my older sister Car, should only get a list as input so if
	// arguments has more than one element something is wrong and I will return
	// "()",
	if (arguments.size() > 1 || arguments.size() == 0){
		result = "()";
	} else {
		List* inputList = ((List*)(getArguments().front()));
		// If my arguement arguments is empty we return "()"
		if (inputList->getArguments().size() == 0){
			result = "()";
		}else {
			inputList->evaluate();
			std::stringstream partialResult;
			partialResult << "(";
			// We skip the first one and the space
			for (unsigned int i = 3; i < inputList->getResult().length(); ++i){
				partialResult << inputList->getResult()[i];
			}
			result = partialResult.str();
		}
	}
}
