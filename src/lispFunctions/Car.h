/*
 * Car.h
 *
 *  Created on: Apr 3, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_CAR_H_
#define SRC_LISPFUNCTIONS_CAR_H_

#include "Function.h"
#include "List.h"
#include <stddef.h>

class Car: public Function {
private:
	List inputList;
	Expression* result;
public:
	Car(List inputList, Expression* result) :
			inputList(inputList), result(result) {}
	virtual ~Car();
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_CAR_H_ */
