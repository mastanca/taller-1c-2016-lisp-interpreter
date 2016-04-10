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
public:
	Function(std::string identifier) : Expression(identifier) {}
	virtual ~Function();
	virtual void evaluate() = 0;
	void appendArgument(Expression* argument);
	void parseBody(std::vector<std::string> subLine);
	const std::vector<Expression*>& getArguments() const;
};

#endif /* SRC_LISPFUNCTIONS_FUNCTION_H_ */
