/*
 * Append.h
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_APPEND_H_
#define SRC_LISPFUNCTIONS_APPEND_H_

#include "Function.h"
#include <string>

class Append: public Function {
private:
	// Flattens the result
	void flatten();
public:
	// Constructor
	Append() : Function(LISP_APPEND, "()") {}
	// Destroyer
	virtual ~Append();
	// Return reference to my result
	std::string& getResult();
	// Do what I know to do, evaluate myself
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_APPEND_H_ */
