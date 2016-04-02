/*
 * isLessThan.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "IsLessThan.h"

IsLessThan::~IsLessThan() {
}

void IsLessThan::evaluate() {
	this->result = (this->arg1 < this->arg2);
}
