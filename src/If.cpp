/*
 * If.cpp
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#include "If.h"
#include <string>
#include <vector>


If::~If() {
}

std::string If::getResult() {
	return result;
}

void If::evaluate() {
	// empty list = false
	// not empty list = true
	// Im going to receive 3 arguments, if the first argument is
	// true then evaluate and return the second one
	// if the first argument is false (empty list) the evaluate and
	// return the third one
	std::vector<Expression*> myArguments = getArguments();
	std::vector<Expression*>::iterator it = myArguments.begin();
	Expression* condition = *it;
	++it;
	Expression* trueReturn = *it;
	++it;
	Expression* falseReturn = *it;

	// Start checking conditons
	condition->evaluate();
	if (condition->getResult() == LISP_FALSE){
		falseReturn->evaluate();
		result = falseReturn->getResult();
	} else {
		trueReturn->evaluate();
		result = trueReturn->getResult();
	}
}
