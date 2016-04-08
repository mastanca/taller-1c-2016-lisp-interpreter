/*
 * Tokenizer.cpp
 *
 *  Created on: Apr 7, 2016
 *      Author: mastanca
 */

#include "Tokenizer.h"

#include <string.h>
#include <iostream>

Tokenizer::Tokenizer() {
}

Tokenizer::~Tokenizer() {
}

char* Tokenizer::tokenize(std::string string) {
	char* toTokenize = (char*)string.c_str();
	char* tokenized(strtok(toTokenize, " "));
	while (tokenized != NULL)
	{
	std::cout << tokenized << std::endl;
	tokenized = strtok (NULL, " ,.-");
	}
	return tokenized;
}
