/*
 * Constant.h
 *
 *  Created on: Apr 4, 2016
 *      Author: mastanca
 */

#ifndef SRC_CONSTANT_H_
#define SRC_CONSTANT_H_

#include "Expression.h"
#include <string>


class Constant: public Expression {
private:
	// Store my value here
	int value;
	// Get a number and convert to it's string form
	std::string numberToString(int number);
	// My string result
	std::string result;
public:
	// Constructor
	explicit Constant(int value) : Expression(numberToString(value)),
	 		value(value), result("") {}
	// Destroyer
	virtual ~Constant();
	// Do what I know to do, evaluate myself
	void evaluate();
	// Get a reference to my result
	std::string& getResult();
};

#endif /* SRC_CONSTANT_H_ */
