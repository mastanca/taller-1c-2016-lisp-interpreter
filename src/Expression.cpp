/*
 * Expression.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Expression.h"


Expression::~Expression() {
}

const std::string& Expression::getIdentifier() const {
	return identifier;
}
