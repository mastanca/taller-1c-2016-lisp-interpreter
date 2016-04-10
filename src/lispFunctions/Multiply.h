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
	int result;
public:
	Multiply() : Function(LISP_MULTIPLY), result(0) {}
	void evaluate();
	virtual ~Multiply();
	int getResult() const;
};

#endif /* SRC_LISPFUNCTIONS_MULTIPLY_H_ */
