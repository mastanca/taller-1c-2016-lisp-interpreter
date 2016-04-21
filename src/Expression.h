/*
 * Expression.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_EXPRESSION_H_
#define SRC_EXPRESSION_H_

#include <string>
#include <vector>
#include "lispFunctionConstants.h"


class Expression {
protected:
	// The string that identifies myself
	std::string identifier;
public:
	// Constructor
	explicit Expression(std::string identifier) : identifier(identifier) {}
	// Destroyer
	virtual ~Expression();
	// Do what I know to do, evaluate myself
	virtual void evaluate() = 0;
	// Get my identifier
	const std::string& getIdentifier() const;
	// Get a reference to my result
	virtual std::string& getResult() = 0;
};

#endif /* SRC_EXPRESSION_H_ */
