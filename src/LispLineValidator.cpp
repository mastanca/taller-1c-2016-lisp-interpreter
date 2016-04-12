/*
 * LispLineValidator.cpp
 *
 *  Created on: Apr 10, 2016
 *      Author: mastanca
 */

#include "LispLineValidator.h"

#include <sys/types.h>
#include <iterator>

#define OPENING_PARENTHESIS "("
#define CLOSING_PARENTHESIS ")"

LispLineValidator::~LispLineValidator() {
}

bool LispLineValidator::isValidLine() {
	uint openingParenthesisCount = 0;
	uint closingParenthesisCount = 0;
	for (std::vector<std::string>::iterator it = lispLine->begin();
			it != lispLine->end(); ++it) {
		if (*it == OPENING_PARENTHESIS) {
			++openingParenthesisCount;
		} else if (*it == CLOSING_PARENTHESIS) {
			++closingParenthesisCount;
		}
	}
	if (openingParenthesisCount == closingParenthesisCount)
		return true;
	return false;

}
