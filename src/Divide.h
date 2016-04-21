/*
 * Divide.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_DIVIDE_H_
#define SRC_LISPFUNCTIONS_DIVIDE_H_

#include "Function.h"
#include <string>

class Divide : public Function {
public:
	// Constructor
	Divide() : Function(LISP_DIVIDE, "") {}
	// Do what I know to do, evaluate myself
	void evaluate();
	// Destroyer
	virtual ~Divide();
	// Get a reference to my result
	std::string& getResult();
};

#endif /* SRC_LISPFUNCTIONS_DIVIDE_H_ */
