/*
 * Print.cpp
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#include "Print.h"

#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "lispFunctionConstants.h"
#include "Lock.h"

#define SPACE " "

Print::~Print() {
}

void Print::evaluate() {
	Lock lock(mutex);
	for (std::vector<Expression*>::iterator it = arguments.begin();
			it != arguments.end(); ++it) {
		// Let's assume expression are grown ups and know how to
		// represent themselves
		(*it)->evaluate();
		std::cout << (*it)->getResult();
		// If the expression is not the last one then add a space after it
		if (it != arguments.end())
			std::cout << SPACE;
	}
	// Add trailing line jump
	std::cout << std::endl;
}

std::string Print::getResult() {
	return LISP_PRINT;
}
