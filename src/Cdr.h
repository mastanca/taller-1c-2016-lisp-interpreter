/*
 * Cdr.h
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_CDR_H_
#define SRC_LISPFUNCTIONS_CDR_H_

#include "Function.h"
#include <string>


class Cdr: public Function {
public:
	// Constructor
	Cdr() : Function(LISP_CDR, "") {}
	// Destroyer
	virtual ~Cdr();
	// Get reference to my result
	std::string& getResult();
	// Do what I know to do, evaluate myself
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_CDR_H_ */
