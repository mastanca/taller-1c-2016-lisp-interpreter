/*
 * Append.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_APPEND_H_
#define SRC_LISPFUNCTIONS_APPEND_H_

#include "Function.h"
#include <stddef.h>
#include <vector>


// TODO: Test
class Append: public Function {
private:
	std::vector<Expression*> list1;
	std::vector<Expression*> list2;
	std::vector<Expression*> resultingList;
public:
	Append(std::vector<Expression*> list1, std::vector<Expression*> list2,
			std::vector<Expression*> resultingList) : list1(list1),
			list2(list2), resultingList(resultingList) {}
	virtual ~Append();
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_APPEND_H_ */
