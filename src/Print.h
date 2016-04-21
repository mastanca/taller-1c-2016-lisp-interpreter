/*
 * Print.h
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_PRINT_H_
#define SRC_LISPFUNCTIONS_PRINT_H_

#include <string>

#include "Function.h"
#include "lispFunctionConstants.h"
#include "Mutex.h"


class Print: public Function {
private:
	// To lock stdout
	Mutex mutex;
public:
	Print() : Function(LISP_PRINT, "") {}
	virtual ~Print();
	void evaluate();
	std::string& getResult();
};

#endif /* SRC_LISPFUNCTIONS_PRINT_H_ */
