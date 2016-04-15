/*
 * lisp_paser.h
 *
 *  Created on: Apr 1, 2016
 *      Author: mastanca
 */

#ifndef SRC_LISPPARSER_H_
#define SRC_LISPPARSER_H_

#include <map>
#include <vector>

#include "Mutex.h"
#include "Thread.h"

class Function;

#define OPENING_PARENTHESIS '('
#define CLOSING_PARENTHESIS ')'

#include <string>
#include "Expression.h"

class LispParser {
private:
	// Original line to parse
	std::vector<std::string>* lispLine;
	// Structure to save running threads
	std::vector<Thread*> runningThreads;
	// Structure to save pointers to allocated objects
	std::vector<Expression*> expressionPointers;
	// Structure to save the global variables
	std::map<std::string, Expression*> globalVariables;
	// Join my running threads
	void joinThreads();
	// Current position in the original lisp line
	unsigned int currentPos;
	// Size of the lisp line
	unsigned int lastPos;
	// Mutex for threading
	Mutex mutex;
public:
	// Constructor
	LispParser() :
			lispLine(NULL), currentPos(0), lastPos(0) {
	}
	// Prepares line for parsing by adding whitespace between characters
	std::string prepareLineForParsing(std::string* lispLine);
	// Parse lisp line, determining expressions inside it
	int parseLispLine();
	// Destroyer
	virtual ~LispParser();
	void setLispLine(std::vector<std::string>* lispLine);
	// Returns expression inside parenthesis
	Expression* getExpression(std::vector<std::string>* lispLine);
	// Add a global varable to my control structure
	void addGlobalVariable(std::string tag, Expression* expression);
	// Clean instance variables for next run
	void clean();
private:
	// Functions
	// Compares symbols and returns the corresponding
	// function or NULL if the symbol was )
	Function* getFunction(std::string &string);
	// Returns a constant with its value
	Expression* getConstant(std::string &string);
	// Check whether the input is a number or not
	bool isNumeric(std::string input, int numberBase);
	// Pareses the function, goes recursive if it has to
	Expression* parseFunction(std::vector<std::string>* lispLine, int* position,
			std::string* element);
	// Returns a global variable expression
	Expression* getGlobalVariable(std::string tag);
};

#endif /* SRC_LISPPARSER_H_ */
