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
	// Constructor
	If() : Function(LISP_IF, "") {}
	// Destroyer
	virtual ~If();
	// Get a reference to my result
	std::string& getResult();
	// Do what I know to do, evaluate myself
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_IF_H_ */
