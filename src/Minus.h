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
	// Constructor
	Minus() : Function(LISP_MINUS, "") {}
	// Do what I know to do, evaluate myself
	void evaluate();
	// Destroyer
	virtual ~Minus();
	// Get a reference to my result
	std::string& getResult();
};

#endif /* SRC_LISPFUNCTIONS_MINUS_H_ */
