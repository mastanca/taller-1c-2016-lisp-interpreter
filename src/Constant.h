/*
 * Constant.h
 *
 *  Created on: Apr 4, 2016
 *      Author: mastanca
 */

#ifndef SRC_CONSTANT_H_
#define SRC_CONSTANT_H_

#include "Expression.h"

class Constant: public Expression {
private:
	int value;
	int &result;
public:
	Constant(int value, int &result) : value(value), result(result) {}
	virtual ~Constant();
	void evaluate();
};

#endif /* SRC_CONSTANT_H_ */
