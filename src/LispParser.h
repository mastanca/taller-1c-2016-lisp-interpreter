/*
 * lisp_paser.h
 *
 *  Created on: Apr 1, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPPARSER_H_
#define SRC_LISPPARSER_H_

#include <vector>

class Function;

#define OPENING_PARENTHESIS '('
#define CLOSING_PARENTHESIS ')'

#include <string>
#include "Expression.h"

class LispParser {
private:
	std::vector<Expression*> expressionPointers;
	Expression* getExpression(std::vector<std::string>* lispLine);
	Function* getFunction(std::string &string);
	Expression* getConstant(std::string &string);
	bool isNumeric(std::string pszInput, int nNumberBase );
	std::vector<std::string> getSubVector(std::vector<std::string>* vector, unsigned int offset);
	Expression* parseFunction(std::vector<std::string>* lispLine, int* position, std::string* element);
	unsigned int currentPos;
	unsigned int lastPos;
public:
	// Constructor
	LispParser() : currentPos(0), lastPos(0) {}
	// Prepares line for parsing by adding whitespace between characters
	std::string prepareLineForParsing(std::string* lispLine);
	// Parse lisp line, determining expressions inside it
	int parseLispLine(std::vector<std::string>* lispLine);
	// Destroyer
	virtual ~LispParser();
};

#endif /* SRC_LISPPARSER_H_ */
