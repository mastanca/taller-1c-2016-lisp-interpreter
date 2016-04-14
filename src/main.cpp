/*
 * main.cpp
 *
 *  Created on: Mar 31, 2016
 *      Author: mastanca
 */

#include <iostream>
#include <string>
#include <vector>

#include "LispLineValidator.h"
#include "LispParser.h"
#include "Tokenizer.h"
#include <stdlib.h>

#define INPUT_ARGUMENTS_ERROR 1
#define INVALID_LISP_LINE_ERROR 2

int main(int argc, char *argv[]){
	if (argc > 1){
		argv++; // Using argv just to satisfy compiler
		std::cerr << "ERROR: argumentos" << std::endl;
		return INPUT_ARGUMENTS_ERROR;
	}
	LispParser aLispParser;
	std::string aLispLine;
	Tokenizer tokenizer;
	while (std::getline(std::cin, aLispLine)) {
		std::string parsedLine(aLispParser.prepareLineForParsing(&aLispLine));
		std::vector<std::string>* tokensVector;
		tokensVector = tokenizer.tokenize(parsedLine);
		LispLineValidator validator = LispLineValidator(tokensVector);
		if (validator.isValidLine() == false){
			std::cerr << "ERROR: <linea invalida>" << std::endl;
			return INVALID_LISP_LINE_ERROR;
		} else {
			aLispParser.setLispLine(tokensVector);
			aLispParser.parseLispLine();
			aLispParser.clean();
		}
	}
	return EXIT_SUCCESS;
}


