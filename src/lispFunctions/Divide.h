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
public:
	Divide() : Function(LISP_DIVIDE, "") {}
	void evaluate();
	virtual ~Divide();
	std::string getResult();
};

#endif /* SRC_LISPFUNCTIONS_DIVIDE_H_ */
