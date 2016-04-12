/*
 * Function.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_FUNCTION_H_
#define SRC_LISPFUNCTIONS_FUNCTION_H_

#include "../Expression.h"

class Function : public Expression {
protected:
	std::vector<Expression*> arguments;
	std::string result;
public:
	Function(std::string identifier, std::string result) : Expression(identifier), result(result) {}
	virtual ~Function();
	virtual void evaluate() = 0;
	void appendArgument(Expression* argument);
	std::vector<Expression*>& getArguments();
};

#endif /* SRC_LISPFUNCTIONS_FUNCTION_H_ */
