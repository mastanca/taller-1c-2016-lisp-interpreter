/*
 * Minus.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_MINUS_H_
#define SRC_LISPFUNCTIONS_MINUS_H_

#include "Function.h"

class Minus : public Function {
private:
	int result;
public:
	Minus() : Function(LISP_MINUS), result(0) {}
	void evaluate();
	virtual ~Minus();
	int getResult() const;
};

#endif /* SRC_LISPFUNCTIONS_MINUS_H_ */
