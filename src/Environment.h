/*
 * Environment.h
 *
 *  Created on: Apr 4, 2016
 *      Author: mastanca
 */

#ifndef SRC_ENVIRONMENT_H_
#define SRC_ENVIRONMENT_H_

class Environment {
private:
	std::vector<Expression*> environment;
public:
	Environment();
	virtual ~Environment();
};

#endif /* SRC_ENVIRONMENT_H_ */
