/*
 * Function.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_FUNCTION_H_
#define SRC_LISPFUNCTIONS_FUNCTION_H_

#include "../Expression.h"

class Function : public Expression {
public:
	Function();
	virtual ~Function();
	virtual void evaluate() = 0;
};

#endif /* SRC_LISPFUNCTIONS_FUNCTION_H_ */
