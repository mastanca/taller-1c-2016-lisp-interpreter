/*
 * Minus.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_MINUS_H_
#define SRC_LISPFUNCTIONS_MINUS_H_

#include "Function.h"

class Minus : public Function {
private:
	int arg1, arg2;
	int &result;
public:
	Minus(int arg1, int arg2, int &result) : arg1(arg1), arg2(arg2),
		result(result) {}
	void evaluate();
	virtual ~Minus();
};

#endif /* SRC_LISPFUNCTIONS_MINUS_H_ */
