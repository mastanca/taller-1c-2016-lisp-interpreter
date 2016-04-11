/*
 * Append.h
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_APPEND_H_
#define SRC_LISPFUNCTIONS_APPEND_H_

#include "Function.h"

class Append: public Function {
public:
	Append() : Function(LISP_APPEND, "") {}
	virtual ~Append();
	std::string getResult();
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_APPEND_H_ */
