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
#include <algorithm>

int LispParser::parseLispLine(std::vector<std::string>* lispLine) {
	std::string expression = getExpression(lispLine);
//	std::cout << expression << std::endl;

	return EXIT_SUCCESS;
}

std::string LispParser::prepareLineForParsing(std::string* lispLine) {
	char tempChar;
	std::stringstream newString;
	for (uint i = 0; i < lispLine->size(); ++i) {
		tempChar = lispLine->at(i);
		if (tempChar == OPENING_PARENTHESIS || tempChar == CLOSING_PARENTHESIS) {
			std::string withSpaces = (" " + std::string(sizeof(char), tempChar)
					+ " ");
			newString << withSpaces;
		} else {
			newString << tempChar;
		}
	}
	return newString.str();
}

LispParser::~LispParser() {
}

std::string LispParser::getExpression(std::vector<std::string>* lispLine) {
	if (lastPos == 0)
		lastPos = lispLine->size();
	std::stringstream returningExpression;
	int i = 0;
	while (currentPos < lastPos) {
		++currentPos;
		std::string element = lispLine->at(i);

		if (element == ")") {

			// If it's a closing one append and return
			returningExpression << ")";
			std::cout << returningExpression.str() << std::endl;

		} else if (isNumeric(element, 10)) {

			// If it's a number then append and return
			returningExpression << element;
			std::cout << returningExpression.str() << std::endl;

		} else if (getFunction(element) != "") {

			// If it's a function then append symbol and get expression of following element
			returningExpression << getFunction(element);
			std::cout << returningExpression.str() << std::endl;
			std::vector<std::string> subvec = getSubVector(lispLine, i + 1);
			returningExpression << getExpression(&subvec);
			std::cout << returningExpression.str() << std::endl;

		} else if (element == "(") {

			// if it's an opening one get recursive
			returningExpression << "(";
			std::vector<std::string> subvec = getSubVector(lispLine, i + 1);
			returningExpression << getExpression(&subvec);
			std::cout << returningExpression.str() << std::endl;

		}
		++i;
	}

	return returningExpression.str();
}

std::string LispParser::getFunction(std::string &string) {
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
		return "I am a sync";
	return "";
}

std::string LispParser::getConstant(std::string &string) {
	if (isdigit(atoi(string.c_str())))
		return string;
	return "";
}

bool LispParser::isNumeric(std::string pszInput, int nNumberBase) {
	std::string base = "0123456789ABCDEF";
	std::string input = pszInput;

	return (input.find_first_not_of(base.substr(0, nNumberBase))
			== std::string::npos);
}

std::vector<std::string> LispParser::getSubVector(
		std::vector<std::string>* vector, unsigned int offset) {
	std::vector<std::string> newVec(vector->begin() + offset, vector->end());
	return newVec;
}
