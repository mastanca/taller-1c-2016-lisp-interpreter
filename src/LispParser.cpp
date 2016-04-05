/*
 * lispParser.cpp
 *
 *  Created on: Apr 1, 2016
 *      Author: mastanca
 */

#include "LispParser.h"
#include <iostream>
#include "lispFunctions/Sum.h"
#include <sstream>
#include <stdlib.h>

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

		std::cout << this->insideParenthesisString << std::endl;
		std::istringstream iss(insideParenthesisString);
		std::string token;
		while (std::getline(iss, token, ' '))
		{
		    std::cout << this->getExpression(token) << std::endl;

		}
//		Expression* anExpression = this->getExpression(this->insideParenthesisString);

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
		return "I am a plus";
	if (string == "-")
		return "I am a minus";
	if (string == "*")
		return "I multiply";
	if (string == "/")
		return "I divide";
	if (string == "=")
		return 0;
	if (string == ">")
		return 0;
	if (string == "<")
		return 0;
	if (string == "car")
		return 0;
	if (string == "cdr")
		return 0;
	if (string == "append")
		return 0;
	if (string == "if")
		return 0;
	if (string == "defun")
		return 0;
	if (string == "print")
		return 0;
	if (string == "setq")
		return 0;
	if (string == "list")
		return 0;
	if (string == "sync")
		return 0;
	std::ostringstream oss;
	oss << "I am a number ";
	oss << string;
	return oss.str();
}
