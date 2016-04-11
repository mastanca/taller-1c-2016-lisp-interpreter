/*
 * List.h
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_LIST_H_
#define SRC_LISPFUNCTIONS_LIST_H_

#include "Function.h"

class List: public Function {
public:
	List() : Function(LISP_LIST, "()") {}
	virtual ~List();
	std::string getResult();
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_LIST_H_ */
