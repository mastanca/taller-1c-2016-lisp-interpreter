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
