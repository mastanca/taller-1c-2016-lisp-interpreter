/*
 * Expression.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_EXPRESSION_H_
#define SRC_EXPRESSION_H_

class Expression {
public:
	Expression();
	virtual ~Expression();
	virtual void evaluate() = 0;
};

#endif /* SRC_EXPRESSION_H_ */
