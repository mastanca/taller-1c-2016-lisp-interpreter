/*
 * Sum.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_SUM_H_
#define SRC_LISPFUNCTIONS_SUM_H_

#include "Function.h"

class Sum : public Function {
private:
	int arg1, arg2;
	int &result;
public:
	Sum(int arg1, int arg2, int &result) : arg1(arg1), arg2(arg2),
		result(result) {}
	void evaluate();
	virtual ~Sum();
};



#endif /* SRC_LISPFUNCTIONS_SUM_H_ */
