/*
 * lisp_paser.h
 *
 *  Created on: Apr 1, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPPARSER_H_
#define SRC_LISPPARSER_H_

#define OPENING_PARENTHESIS '('
#define CLOSING_PARENTHESIS ')'

#include <string>
#include "Expression.h"

class LispParser {
private:
	std::string getExpression(std::vector<std::string>* lispLine);
	std::string getFunction(std::string &string);
	std::string getConstant(std::string &string);
	bool isNumeric(std::string pszInput, int nNumberBase );
	std::vector<std::string> getSubVector(std::vector<std::string>* vector, unsigned int offset);
public:
	// Constructor
	LispParser();
	// Prepares line for parsing by adding whitespace between characters
	std::string prepareLineForParsing(std::string* lispLine);
	// Parse lisp line, determining expressions inside it
	int parseLispLine(std::vector<std::string>* lispLine);
	// Destroyer
	virtual ~LispParser();
};

#endif /* SRC_LISPPARSER_H_ */
