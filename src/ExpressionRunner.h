/*
 * ExpressionRunner.h
 *
 *  Created on: Apr 12, 2016
 *      Author: mastanca
 */

#ifndef SRC_EXPRESSIONRUNNER_H_
#define SRC_EXPRESSIONRUNNER_H_

#include "Expression.h"
#include "Thread.h"

class ExpressionRunner : public Thread {
private:
	Expression* expressionToRun;
public:
	// Constructor
	explicit ExpressionRunner(Expression* expression) :
		expressionToRun(expression) {}
	// Destroyer
	virtual ~ExpressionRunner();
	// Run the runner
	void run();
};

#endif /* SRC_EXPRESSIONRUNNER_H_ */
