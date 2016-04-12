/*
 * Minus.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_MINUS_H_
#define SRC_LISPFUNCTIONS_MINUS_H_

#include "Function.h"
#include <string>


class Minus : public Function {
public:
	Minus() : Function(LISP_MINUS, "") {}
	void evaluate();
	virtual ~Minus();
	std::string getResult();
};

#endif /* SRC_LISPFUNCTIONS_MINUS_H_ */
