/*
 * Car.h
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_CAR_H_
#define SRC_LISPFUNCTIONS_CAR_H_

#include "Function.h"
#include <string>


class Car: public Function {
public:
	// Constructor
	Car() : Function(LISP_CAR, "") {}
	// Destroyer
	virtual ~Car();
	// Get a reference to my result
	std::string& getResult();
	// Do what I know to do, evaluate myself
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_CAR_H_ */
