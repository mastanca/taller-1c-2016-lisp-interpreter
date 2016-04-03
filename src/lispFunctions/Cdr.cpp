/*
 * Cdr.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: mastanca
 */

#include "Cdr.h"

Cdr::~Cdr() {
}

void Cdr::evaluate() {
	std::vector<Expression*>::iterator v = inputList.getData().begin();
	v++;
	while( v != inputList.getData().end()) {
		resultList->getData().push_back(*v);
	}
}
