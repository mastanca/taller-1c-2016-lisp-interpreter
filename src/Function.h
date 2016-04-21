/*
 * Function.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_FUNCTION_H_
#define SRC_LISPFUNCTIONS_FUNCTION_H_

#include <string>
#include <vector>

#include "Expression.h"

class Function: public Expression {
protected:
	// A list of my arguments
	std::vector<Expression*> arguments;
	// String result
	std::string result;
public:
	// Constructor
	Function(std::string identifier, std::string result) :
			Expression(identifier), result(result) {}
	// Destroyer
	virtual ~Function();
	// Do what I know to do, evaluate myself
	virtual void evaluate() = 0;
	// Append one argument to my list of arguments
	void appendArgument(Expression* argument);
	// Return my arguments list
	std::vector<Expression*>& getArguments();
};

#endif /* SRC_LISPFUNCTIONS_FUNCTION_H_ */
