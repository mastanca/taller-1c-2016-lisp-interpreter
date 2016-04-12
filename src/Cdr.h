/*
 * Cdr.h
 *
 *  Created on: Apr 11, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_CDR_H_
#define SRC_LISPFUNCTIONS_CDR_H_

#include "Function.h"
#include <string>


class Cdr: public Function {
public:
	Cdr() : Function(LISP_CDR, "") {}
	virtual ~Cdr();
	std::string getResult();
	void evaluate();
};

#endif /* SRC_LISPFUNCTIONS_CDR_H_ */
