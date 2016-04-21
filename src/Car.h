/*
 * Car.h
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_CAR_H_
#define SRC_LISPFUNCTIONS_CAR_H_

#include "Function.h"
#include <string>


class Car: public Function {
public:
	Car() : Function(LISP_CAR, "") {}
	virtual ~Car();
	std::string& getResult();
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_CAR_H_ */
