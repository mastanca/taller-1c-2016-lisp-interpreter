/*
 * Sum.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_SUM_H_
#define SRC_LISPFUNCTIONS_SUM_H_

#include "Function.h"
#include "../Expression.h"
#include <string>

class Sum : public Function {
private:
	std::vector<Expression*> args;
	int result;
public:
	Sum(std::vector<Expression*> functionBody) : args(functionBody), result(0) {}
	void evaluate();
	virtual ~Sum();
	int getResult() const;
};



#endif /* SRC_LISPFUNCTIONS_SUM_H_ */
