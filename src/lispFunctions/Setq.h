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

#include "../lispFunctionConstants.h"
#include "Function.h"

class LispParser;

class Setq: public Function {
private:
	Expression* myExpression;
	std::string variableName;
public:
	Setq() : Function(LISP_SETQ, ""), myExpression(NULL), variableName("") {}
	virtual ~Setq();
	void evaluate();
	std::string getResult();
	void parseBody(std::vector<std::string>* subLine, LispParser* parser);
};

#endif /* SRC_LISPFUNCTIONS_SETQ_H_ */
