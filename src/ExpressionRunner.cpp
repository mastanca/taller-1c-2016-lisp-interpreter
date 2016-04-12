/*
 * ExpressionRunner.cpp
 *
 *  Created on: Apr 12, 2016
 *      Author: mastanca
 */

#include "ExpressionRunner.h"

ExpressionRunner::~ExpressionRunner() {
}

void ExpressionRunner::run() {
	expressionToRun->evaluate();
}
