/*
 * Divide.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_DIVIDE_H_
#define SRC_LISPFUNCTIONS_DIVIDE_H_

#include "Function.h"

class Divide : public Function {
private:
	float result;
public:
	Divide() : Function(LISP_DIVIDE), result(0) {}
	void evaluate();
	virtual ~Divide();
	float getResult() const;
};

#endif /* SRC_LISPFUNCTIONS_DIVIDE_H_ */
