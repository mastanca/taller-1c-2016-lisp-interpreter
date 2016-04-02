/*
 * isGreaterThan.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "IsGreaterThan.h"

IsGreaterThan::~IsGreaterThan() {
}

void IsGreaterThan::evaluate() {
	this->result = (this->arg1 > this->arg2);
}
