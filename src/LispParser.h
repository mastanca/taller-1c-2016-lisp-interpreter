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
#include "Expression.h"

class LispParser {
private:
	std::string openingParenthesis, closingParenthesis, insideParenthesisString;
	std::size_t openingParenthesisPosition, closingParenthesisPosition;
//	std::vector<std::string> knownLispFunctions;
public:
	LispParser() : openingParenthesis("("), closingParenthesis(")"),
		insideParenthesisString(""), openingParenthesisPosition(-1),
		closingParenthesisPosition(-1) {

	}
	int parseLispLine(std::string lispLine);
	virtual ~LispParser();
	std::string getExpression(std::string &string);
};

#endif /* SRC_LISPPARSER_H_ */
