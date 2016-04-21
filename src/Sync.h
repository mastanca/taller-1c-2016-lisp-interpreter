/*
 * Sync.h
 *
 *  Created on: Apr 12, 2016
 *      Author: mastanca
 */

#ifndef SRC_SYNC_H_
#define SRC_SYNC_H_

#include "Function.h"
#include <string>

class Sync: public Function {
public:
	// Constructo
	Sync() : Function(LISP_SYNC, "") {}
	// Destroyer
	virtual ~Sync();
	// Do what I know to do, evaluate myself
	void evaluate();
	// Get reference to my result
	std::string& getResult();
};

#endif /* SRC_SYNC_H_ */
