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
	int value;
	std::string numberToString(int number);
	std::string result;
public:
	explicit Constant(int value) : Expression(numberToString(value)),
	 		value(value), result("") {}
	virtual ~Constant();
	void evaluate();
	std::string& getResult();
};

#endif /* SRC_CONSTANT_H_ */
