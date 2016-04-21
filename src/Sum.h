/*
 * Sum.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_SUM_H_
#define SRC_LISPFUNCTIONS_SUM_H_

#include <string>

#include "Function.h"
#include "lispFunctionConstants.h"

class Sum : public Function {
public:
	// Constructor
	Sum() : Function(LISP_SUM, "") {}
	// Do what I know to do, evaluate myself
	void evaluate();
	// Destroyer
	virtual ~Sum();
	// Get reference to my result
	std::string& getResult();
};



#endif /* SRC_LISPFUNCTIONS_SUM_H_ */
