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
#include "List.h"


// TODO: Test
class Append: public Function {
private:
	List list1;
	List list2;
	List resultingList;
public:
	Append(List list1, List list2,
			List resultingList) : list1(list1),
			list2(list2), resultingList(resultingList) {}
	virtual ~Append();
	void evaluate();
	List& getResultingList();
};

#endif /* SRC_LISPFUNCTIONS_APPEND_H_ */
