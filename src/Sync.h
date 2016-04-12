/*
 * Sync.h
 *
 *  Created on: Apr 12, 2016
 *      Author: mastanca
 */

#ifndef SRC_SYNC_H_
#define SRC_SYNC_H_

#include "Function.h"

class Sync: public Function {
public:
	Sync() : Function(LISP_SYNC, "") {}
	virtual ~Sync();
	void evaluate();
	std::string getResult();
};

#endif /* SRC_SYNC_H_ */
