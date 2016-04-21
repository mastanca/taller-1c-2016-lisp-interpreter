/*
 * Setq.h
 *
 *  Created on: Apr 12, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_SETQ_H_
#define SRC_LISPFUNCTIONS_SETQ_H_

#include <string>
#include <vector>

#include "Function.h"
#include "lispFunctionConstants.h"

class LispParser;

class Setq: public Function {
private:
	// The expression I represent
	Expression* myExpression;
	// The tag which identifies me
	std::string variableName;
public:
	// Constructor
	Setq() : Function(LISP_SETQ, ""), myExpression(NULL), variableName("") {}
	// Destroyer
	virtual ~Setq();
	// Do what I know to do, evaluate myself
	void evaluate();
	// Get a reference to my result
	std::string& getResult();
	// Parse my own body (subline) with the given parser
	void parseBody(std::vector<std::string>* subLine, LispParser* parser);
};

#endif /* SRC_LISPFUNCTIONS_SETQ_H_ */
