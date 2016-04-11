/*
 * main.cpp
 *
 *  Created on: Mar 31, 2016
 *      Author: mastanca
 */

#include <iostream>
#include <sstream>
#include <string>
#include <string.h>

#include "LispParser.h"
#include "Constant.h"
#include "Tokenizer.h"

int main(){
	std::string testing("(+ (+ 2 (- 10 7)) (* 2 2))"); // 9	// Not passing
//	std::string testing = "(- 25 (* 5 4) (/ 50 10))"; // 20	// Not passing
//	std::string testing  = "(+ 5 5 (- 2 (+ 0 1)))"; // 11	// Is ok
//	std::string testing = "(- 25 (* 5 4))"; // 5 // Is ok
//	std::string testing = "(+ 5 5 5)";	// 15// Is ok
	std::cout << "Original string: " << testing << std::endl;
	LispParser aLispParser;
	std::string parsedLine(aLispParser.prepareLineForParsing(&testing));
	std::vector<std::string>* tokensVector;
	Tokenizer tokenizer;
	tokensVector = tokenizer.tokenize(parsedLine);
	aLispParser.parseLispLine(tokensVector);
	return 0;
}


