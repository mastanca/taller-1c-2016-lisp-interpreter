/*
 * isLessThan.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_ISLESSTHAN_H_
#define SRC_LISPFUNCTIONS_ISLESSTHAN_H_

#include "Function.h"

class IsLessThan: public Function {
private:
	int arg1, arg2;
	bool &result;
public:
	IsLessThan(int arg1, int arg2, bool &result) : arg1(arg1), arg2(arg2),
	result(result) {}
	virtual ~IsLessThan();
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_ISLESSTHAN_H_ */
