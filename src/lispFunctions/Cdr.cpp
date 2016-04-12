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

std::string Cdr::getResult() {
	return result;
}

void Cdr::evaluate() {
	// Im much like my older sister Car, should only get a list as input so if
	// arguments has more than one element something is wrong and we will return
	// "",
	if (arguments.size() > 1 || arguments.size() == 0){
		result = "()";
	} else {
//		std::vector<Expression*> myArgumentArguments = ((Function*)(getArguments().front()))->getArguments();
		List* inputList = ((List*)(getArguments().front()));
		// If my arguement arguments is empty we return ""
		if (inputList->getArguments().size() == 0){
			result = "()";
		}else {
			std::stringstream partialResult;
			partialResult << "(";
			// We skip the first one and the space
			for (unsigned int i = 3; i < inputList->getResult().length(); ++i){
				partialResult << inputList->getResult()[i];
				// My arguments are only lists so we can treat them as functions to
				// get their arguments
//				Expression* arg = *it;
//				arg->evaluate();
//				partialResult << arg->getResult() << SPACE;
			}


			result = partialResult.str();
		}
	}
}
