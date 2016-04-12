/*
 * LispLineValidator.h
 *
 *  Created on: Apr 10, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPLINEVALIDATOR_H_
#define SRC_LISPLINEVALIDATOR_H_

#include <string>
#include <vector>

class LispLineValidator {
private:
	std::vector<std::string>* lispLine;
public:
	explicit LispLineValidator(std::vector<std::string>* lispLine) :
			lispLine(lispLine) {
	}
	virtual ~LispLineValidator();
	bool isValidLine();
};

#endif /* SRC_LISPLINEVALIDATOR_H_ */
