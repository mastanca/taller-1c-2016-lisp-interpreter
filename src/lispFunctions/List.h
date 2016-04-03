/*
 * List.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_LIST_H_
#define SRC_LISPFUNCTIONS_LIST_H_

#include <vector>
#include "Function.h"

// TODO: Test
class List: public Function {
private:
	std::vector<Expression*> data;
	int &result;
public:
	List(std::vector<Expression*> data) : data(data), result(result) {}
	virtual ~List();
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_LIST_H_ */
