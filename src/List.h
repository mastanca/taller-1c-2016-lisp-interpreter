/*
 * List.h
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_LIST_H_
#define SRC_LISPFUNCTIONS_LIST_H_

#include "Function.h"
#include <string>


class List: public Function {
public:
	// Constructor
	List() : Function(LISP_LIST, "()") {}
	// Destroyer
	virtual ~List();
	// Get a reference to my result
	std::string& getResult();
	// Do what I know to do, evaluate myself
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_LIST_H_ */
