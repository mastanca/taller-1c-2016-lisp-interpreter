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
	std::string testing("(+ (+ 2 (- 10 7) (* 2 2)))");
	std::cout << "Original string: " << testing << std::endl;
	LispParser aLispParser;
	std::string parsedLine(aLispParser.prepareLineForParsing(&testing));
	std::cout << "New string: " << parsedLine << std::endl;
	Tokenizer tokenizer;
	tokenizer.tokenize(parsedLine);
//	aLispParser.parseLispLine(testing);
	return 0;
}


