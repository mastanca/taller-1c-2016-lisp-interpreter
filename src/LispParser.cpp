/*
 * lispParser.cpp
 *
 *  Created on: Apr 1, 2016
 *      Author: mastanca
 */

#include "LispParser.h"
#include <iostream>
#include <cstdlib>
#include <sstream>

LispParser::LispParser() {
}

int LispParser::parseLispLine(std::string lispLine) {
	std::string stringToParse = lispLine;
	bool isEmptyString = false;

	while (!isEmptyString){

	}
	return EXIT_SUCCESS;
}

std::string LispParser::prepareLineForParsing(std::string* lispLine) {
	char tempChar;
	std::stringstream newString;
	for (uint i = 0; i < lispLine->size(); ++i) {
		tempChar = lispLine->at(i);
		if (tempChar == OPENING_PARENTHESIS || tempChar == CLOSING_PARENTHESIS){
			std::string withSpaces = (" " + std::string(sizeof(char) ,tempChar) + " ");
			newString << withSpaces;
		} else {
			newString << tempChar;
		}
	}
	return newString.str();
}

LispParser::~LispParser() {
}
//std::string LispParser::getExpression(std::string &string) {
//	if (string == "+")
//		return "I am a plus";
//	if (string == "-")
//		return "I am a minus";
//	if (string == "*")
//		return "I multiply";
//	if (string == "/")
//		return "I divide";
//	if (string == "=")
//		return 0;
//	if (string == ">")
//		return 0;
//	if (string == "<")
//		return 0;
//	if (string == "car")
//		return 0;
//	if (string == "cdr")
//		return 0;
//	if (string == "append")
//		return 0;
//	if (string == "if")
//		return 0;
//	if (string == "defun")
//		return 0;
//	if (string == "print")
//		return 0;
//	if (string == "setq")
//		return 0;
//	if (string == "list")
//		return 0;
//	if (string == "sync")
//		return 0;
//	std::ostringstream oss;
//	oss << "I am a number ";
//	oss << string;
//	return oss.str();
//}
