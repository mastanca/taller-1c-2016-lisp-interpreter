/*
 * Sum.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Sum.h"

void Sum::evaluate() {
	this->result = this->arg1 + this->arg2;
}

Sum::~Sum() {
}

int Sum::getResult() const {
	return result;
}
