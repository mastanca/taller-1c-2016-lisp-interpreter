/*
 * lisp_paser.h
 *
 *  Created on: Apr 1, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPPARSER_H_
#define SRC_LISPPARSER_H_

#include <string>
#include <iostream>
#include "lispFunctionConstants.h"

class LispParser {
private:
	std::string openingParenthesis, closingParenthesis, insideParenthesisString;
	std::size_t openingParenthesisPosition, closingParenthesisPosition;
public:
	LispParser() : openingParenthesis("("), closingParenthesis(")"),
		insideParenthesisString(""), openingParenthesisPosition(-1),
		closingParenthesisPosition(-1) {}
	int parseLispLine(std::string lispLine);
	virtual ~LispParser();
};

#endif /* SRC_LISPPARSER_H_ */
