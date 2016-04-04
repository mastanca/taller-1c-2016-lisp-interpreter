/*
 * lispParser.cpp
 *
 *  Created on: Apr 1, 2016
 *      Author: mastanca
 */

#include "LispParser.h"

int LispParser::parseLispLine(std::string lispLine) {
	std::string stringToParse = lispLine;
	bool isEmptyString = false;

	while (!isEmptyString){
		this->openingParenthesisPosition = stringToParse.rfind(
				this->openingParenthesis);
		closingParenthesisPosition = stringToParse.find(
				this->closingParenthesis,
				this->openingParenthesisPosition);
		insideParenthesisString = stringToParse.substr(
				this->openingParenthesisPosition + 1,
				this->closingParenthesisPosition -
				this->openingParenthesisPosition - 1);

//		std::cout << this->openingParenthesisPosition << std::endl;
//		std::cout << this->closingParenthesisPosition << std::endl;
		std::cout << this->insideParenthesisString << std::endl;
//		std::cout << this->getExpression(this->insideParenthesisString) << std::endl;

		stringToParse.erase(this->openingParenthesisPosition,
				this->closingParenthesisPosition -
				this->openingParenthesisPosition + 1);
//		std::cout << stringToParse << std::endl;
		isEmptyString = (stringToParse == "");
	}
	return 0;
}

LispParser::~LispParser() {
}

std::string LispParser::getExpression(std::string &string) {
	if (string == "+")
		return "+";
	if (string == "-")
		return "-";
	if (string == "*")
		return "*";
	if (string == "/")
		return "/";
	if (string == "=")
		return "=";
	if (string == ">")
		return ">";
	if (string == "<")
		return "<";
	if (string == "car")
		return "car";
	if (string == "cdr")
		return "cdr";
	if (string == "append")
		return "append";
	if (string == "if")
		return "if";
	if (string == "defun")
		return "defun";
	if (string == "print")
		return "print";
	if (string == "setq")
		return "setq";
	if (string == "list")
		return "list";
	if (string == "sync")
		return "sync";
	return 0;
}
