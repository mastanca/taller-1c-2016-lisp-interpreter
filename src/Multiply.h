/*
 * Multiply.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_MULTIPLY_H_
#define SRC_LISPFUNCTIONS_MULTIPLY_H_

#include <string>

#include "Function.h"
#include "lispFunctionConstants.h"

class Multiply : public Function {
public:
	// Constructor
	Multiply() : Function(LISP_MULTIPLY, "") {}
	// Do what I know to do, evaluate myself
	void evaluate();
	// Destroyer
	virtual ~Multiply();
	// Get a reference to my result
	std::string& getResult();
};

#endif /* SRC_LISPFUNCTIONS_MULTIPLY_H_ */
