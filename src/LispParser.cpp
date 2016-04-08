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

int LispParser::parseLispLine(std::vector<std::string>* lispLine) {
	for (std::vector<std::string>::iterator it = lispLine->begin() ; it != lispLine->end(); ++it){
		std::cout << getExpression(*it) << std::endl;
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

std::string LispParser::getExpression(std::string &string) {
	if (string == "(")
		return "Opening expression";
	if (string == ")")
		return "Closing expression";
	if (string == "+")
		return "I am a plus";
	if (string == "-")
		return "I am a minus";
	if (string == "*")
		return "I multiply";
	if (string == "/")
		return "I divide";
	if (string == "=")
		return "I am an equals";
	if (string == ">")
		return "I am a bigger than";
	if (string == "<")
		return "I am a less than";
	if (string == "car")
		return "I am a car";
	if (string == "cdr")
		return "I am a cdr";
	if (string == "append")
		return "I am an append";
	if (string == "if")
		return "I am an if";
	if (string == "defun")
		return "I am a defun";
	if (string == "print")
		return "I am a print";
	if (string == "setq")
		return "I am a setq";
	if (string == "list")
		return "I am a list";
	if (string == "sync")
		return "I am a list";
	std::ostringstream oss;
	oss << "I am a number ";
	oss << string;
	return oss.str();
}
