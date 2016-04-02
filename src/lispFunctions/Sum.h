/*
 * Sum.h
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPFUNCTIONS_SUM_H_
#define SRC_LISPFUNCTIONS_SUM_H_

class Sum {
private:
	int arg1, arg2;
	bool &result;
public:
	Sum(int arg1, int arg2, bool &result) : arg1(arg1), arg2(arg2),
		result(result) {}
	void run();
	virtual ~Sum();
};



#endif /* SRC_LISPFUNCTIONS_SUM_H_ */
