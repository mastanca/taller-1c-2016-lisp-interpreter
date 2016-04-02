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
	int arg1, arg2;
	int &result;
public:
	Divide(int arg1, int arg2, int &result) : arg1(arg1), arg2(arg2),
		result(result) {}
	void evaluate();
	virtual ~Divide();
};

#endif /* SRC_LISPFUNCTIONS_DIVIDE_H_ */
