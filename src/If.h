/*
 * If.h
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_IF_H_
#define SRC_LISPFUNCTIONS_IF_H_

#include "Function.h"
#include <string>


class If: public Function {
public:
	If() : Function(LISP_IF, "") {}
	virtual ~If();
	std::string& getResult();
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_IF_H_ */
