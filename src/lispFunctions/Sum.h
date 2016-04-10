/*
 * Sum.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_SUM_H_
#define SRC_LISPFUNCTIONS_SUM_H_

#include "Function.h"
#include "../Expression.h"
#include <string>

#define SUM_IDENTIFIER "+"

class Sum : public Function {
private:
	int result;
public:
	Sum() : Function(SUM_IDENTIFIER), result(0) {}
	void evaluate();
	virtual ~Sum();
	int getResult() const;
};



#endif /* SRC_LISPFUNCTIONS_SUM_H_ */
