/*
 * Append.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Append.h"

Append::~Append() {
}

void Append::evaluate() {
	std::vector<Expression*>::iterator v = this->list1.begin();
	while( v != this->list1.end()) {
		this->resultingList.push_back(*v);
		v++;
	}
	v = this->list2.begin();
	while( v != this->list2.end()) {
		this->resultingList.push_back(*v);
		v++;
	}
}
