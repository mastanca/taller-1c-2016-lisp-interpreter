/*
 * Multiply.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_MULTIPLY_H_
#define SRC_LISPFUNCTIONS_MULTIPLY_H_

#include "Function.h"

class Multiply : public Function {
private:
	int arg1, arg2;
	int &result;
public:
	Multiply(int arg1, int arg2, int &result) : arg1(arg1), arg2(arg2),
		result(result) {}
	void evaluate();
	virtual ~Multiply();
};

#endif /* SRC_LISPFUNCTIONS_MULTIPLY_H_ */
