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
	// Vector of the words of a lisp line to validate
	std::vector<std::string>* lispLine;
public:
	// Constructor
	explicit LispLineValidator(std::vector<std::string>* lispLine) :
			lispLine(lispLine) {
	}
	// Destroyer
	virtual ~LispLineValidator();
	// Return whether the line is valid or not
	bool isValidLine();
};

#endif /* SRC_LISPLINEVALIDATOR_H_ */
