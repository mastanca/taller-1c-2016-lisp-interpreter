/*
 * lispParser.cpp
 *
 *  Created on: Apr 1, 2016
 *      Author: mastanca
 */

#include "LispParser.h"

#include <sys/types.h>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>
#include <map>


#include "Append.h"
#include "Car.h"
#include "Cdr.h"
#include "Constant.h"
#include "Divide.h"
#include "If.h"
#include "lispFunctionConstants.h"
#include "List.h"
#include "Minus.h"
#include "Multiply.h"
#include "Print.h"
#include "Setq.h"
#include "SubVectorService.h"
#include "Sum.h"
#include "Sync.h"
#include "ExpressionRunner.h"

int LispParser::parseLispLine() {
	Expression * expression = getExpression(lispLine);
	if (expression->getIdentifier() == LISP_SYNC){
		// We found a sync, lets join the running threads before going on
		joinThreads();
	} else {
		ExpressionRunner* aThread = new ExpressionRunner(expression);
		runningThreads.push_back(aThread);
		aThread->run();
	}

	return EXIT_SUCCESS;
}

std::string LispParser::prepareLineForParsing(std::string* lispLine) {
	char tempChar;
	std::stringstream newString;
	for (uint i = 0; i < lispLine->size(); ++i) {
		tempChar = lispLine->at(i);
		if (tempChar == OPENING_PARENTHESIS ||
				tempChar == CLOSING_PARENTHESIS) {
			std::string withSpaces = (" " + std::string(sizeof(char), tempChar)
					+ " ");
			newString << withSpaces;
		} else {
			newString << tempChar;
		}
	}
	return newString.str();
}

void LispParser::setLispLine(std::vector<std::string>* lispLine) {
	this->lispLine = lispLine;
}

LispParser::~LispParser() {
	// Delete all my allocated childs
	for (std::vector<Expression*>::iterator it = expressionPointers.begin();
			it != expressionPointers.end(); ++it) {
		if (*it != NULL)
			delete *it;
	}

	joinThreads();

	expressionPointers.clear();


	// TODO: WATCH HERE
//	for (std::map<std::string, Expression*>::iterator it =
//			globalVariables.begin(); it != globalVariables.end(); ++it) {
//		if (it->second != NULL)
//			delete it->second;
//	}
}

Expression* LispParser::getExpression(std::vector<std::string>* lispLine) {
	Expression* expressionToReturn = NULL;
	if (lastPos == 0)
		lastPos = lispLine->size();
	std::stringstream returningExpression;
	int i = 0;
	while (currentPos < lastPos && i < (int) lispLine->size()) {
		++currentPos;
		std::string element = lispLine->at(i);

		if (element == ")") {
			// If it's a closing one append and return
		} else if (isNumeric(element, 10)) {
			// If it's a number then append and return
			expressionToReturn = getConstant(element);
			expressionToReturn->evaluate();
		} else if (getFunction(element) != NULL) {
			// If it's a function then append symbol and get expression of
			// following element
			expressionToReturn = parseFunction(lispLine, &i, &element);
		} else if (element == "(") {
			// if it's an opening one get recursive
			std::vector<std::string> subvec = SubVectorService().run(lispLine,
					i + 1);
			expressionToReturn = getExpression(&subvec);
			i += subvec.size() - 1;
		} else {
			std::map<std::string,Expression*>::iterator it;
			it = globalVariables.find(element);
			if (it != globalVariables.end())
				expressionToReturn = it->second;
			i += element.size();
		}
		++i;
	}
	return expressionToReturn;
}

Function* LispParser::getFunction(std::string &string) {
	if (string == LISP_SUM) {
		Sum* aSum = new Sum();
		expressionPointers.push_back(aSum);
		return aSum;
	}
	if (string == LISP_MINUS) {
		Minus* aMinus = new Minus();
		expressionPointers.push_back(aMinus);
		return aMinus;
	}
	if (string == LISP_MULTIPLY) {
		Multiply* aMultiply = new Multiply();
		expressionPointers.push_back(aMultiply);
		return aMultiply;
	}
	if (string == LISP_DIVIDE) {
		Divide* aDivide = new Divide();
		expressionPointers.push_back(aDivide);
		return aDivide;
	}
	if (string == LISP_PRINT) {
		Print* aPrint = new Print();
		expressionPointers.push_back(aPrint);
		return aPrint;
	}
	if (string == LISP_LIST) {
		List* aList = new List();
		expressionPointers.push_back(aList);
		return aList;
	}
	if (string == LISP_CAR) {
		Car* aCar = new Car();
		expressionPointers.push_back(aCar);
		return aCar;
	}
	if (string == LISP_CDR) {
		Cdr* aCdr = new Cdr();
		expressionPointers.push_back(aCdr);
		return aCdr;
	}
	if (string == LISP_APPEND) {
		Append* anAppend = new Append();
		expressionPointers.push_back(anAppend);
		return anAppend;
	}
	if (string == LISP_IF) {
		If* anIf = new If();
		expressionPointers.push_back(anIf);
		return anIf;
	}
	if (string == LISP_SETQ) {
		Setq* aSetq = new Setq();
		expressionPointers.push_back(aSetq);
		// Will add to the heap control structure later
		return aSetq;
	}
	if (string == LISP_SYNC) {
		Sync* aSync = new Sync();
		expressionPointers.push_back(aSync);
		return aSync;
	}
//	if (string == "=")
//		return "I am an equals";
//	if (string == ">")
//		return "I am a bigger than";
//	if (string == "<")
//		return "I am a less than";
//	if (string == "defun")
//		return "I am a defun";
	return NULL;
}

Expression* LispParser::getConstant(std::string &string) {
	Constant* aConstant = new Constant(atoi(string.c_str()));
	expressionPointers.push_back(aConstant);
	return aConstant;
}

bool LispParser::isNumeric(std::string input, int numberBase) {
	std::string base = "0123456789ABCDEF";
	std::string output = input;

	return (output.find_first_not_of(base.substr(0, numberBase))
			== std::string::npos);
}

Expression* LispParser::parseFunction(std::vector<std::string>* lispLine,
		int* position, std::string* element) {
	Function* function = getFunction(*element);
	std::stringstream returningExpression;
	returningExpression << function->getIdentifier();
	std::vector<std::string> subvec = SubVectorService().run(lispLine,
			*position + 1);
	if (function->getIdentifier() == LISP_SETQ) {
		// Runtime variables are clever and know how to parse themselves
		// (if you send them a parser)
		((Setq*) function)->parseBody(&subvec, this);
		*position += subvec.size();
	} else {
		for (std::vector<std::string>::iterator it = subvec.begin();
				it != subvec.end(); ++it) {
			if (*it == "(") {
				std::vector<std::string> anotherVec = SubVectorService().run(
						&subvec, *position + 1);
				Expression* tempExpression = getExpression(&anotherVec);
				function->appendArgument(tempExpression);
				it += anotherVec.size();
				// We add size + 1 to maintain the offset
				*position += anotherVec.size() + 1;
			} else {
				// We need a vector argument so...
				std::vector<std::string> tempVec;
				tempVec.push_back(*it);
				Expression* tempExpression = getExpression(&tempVec);
				if (tempExpression != NULL)
					// Its NULL if it was a ")"
					function->appendArgument(tempExpression);
				// Keep moving original lisp line cursor
				++*position;
			}
		}
	}
//	function->evaluate();
	return function;
}

void LispParser::addGlobalVariable(std::string tag, Expression* expression) {
	globalVariables[tag] = expression;
}

void LispParser::clean() {
	currentPos = lastPos = 0;
	lispLine->clear();
}

void LispParser::joinThreads() {
	for (std::vector<Thread*>::iterator it = runningThreads.begin();
			it != runningThreads.end(); ++it) {
		(*it)->join();

		if (*it != NULL) {
			delete *it;
			*it = NULL;
		} //While iterating clean the list
	}

	// Avoid valgrind error
	runningThreads.clear();
}
