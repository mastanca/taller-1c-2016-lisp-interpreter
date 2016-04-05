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
	int result;
public:
	Sum(int arg1, int arg2) : arg1(arg1), arg2(arg2), result(0){}
	void evaluate();
	virtual ~Sum();
	int getResult() const;
};



#endif /* SRC_LISPFUNCTIONS_SUM_H_ */
