/*
 * isGreaterThan.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_ISGREATERTHAN_H_
#define SRC_LISPFUNCTIONS_ISGREATERTHAN_H_

#include "Function.h"

class isGreaterThan: public Function {
private:
	int arg1, arg2;
	bool &result;
public:
	isGreaterThan(int arg1, int arg2, bool &result) : arg1(arg1), arg2(arg2),
	result(result) {}
	virtual ~isGreaterThan();
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_ISGREATERTHAN_H_ */
