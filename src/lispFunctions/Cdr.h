/*
 * Cdr.h
 *
 *  Created on: Apr 3, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_CDR_H_
#define SRC_LISPFUNCTIONS_CDR_H_

#include "Function.h"
#include <vector>
#include "List.h"

class Cdr: public Function {
private:
	List inputList;
	List* resultList;
public:
	Cdr(List inputList, List* resultList) :
		inputList(inputList), resultList(resultList) {}
	virtual ~Cdr();
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_CDR_H_ */
