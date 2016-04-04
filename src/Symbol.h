/*
 * Symbol.h
 *
 *  Created on: Apr 4, 2016
 *      Author: mastanca
 */

#ifndef SRC_SYMBOL_H_
#define SRC_SYMBOL_H_

#include "Expression.h"

class Symbol: public Expression {
private:
	Expression* result;
public:
	Symbol(Expression* result) : result(result) {}
	virtual ~Symbol();
};

#endif /* SRC_SYMBOL_H_ */
