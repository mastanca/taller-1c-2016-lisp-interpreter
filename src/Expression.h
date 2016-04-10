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

class Expression {
protected:
	std::vector<Expression*> environment;
	std::string identifier;
public:
	Expression(std::string identifier) : identifier(identifier) {}
	virtual ~Expression();
	virtual void evaluate() = 0;
	const std::string& getIdentifier() const;
};

#endif /* SRC_EXPRESSION_H_ */
