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

std::vector<std::string>* Tokenizer::tokenize(std::string string) {
	char* toTokenize = (char*)string.c_str();
	char* tokenized(strtok(toTokenize, " "));
	while (tokenized != NULL) {
		std::string newString(tokenized);
		tokensVector.push_back(newString);
		tokenized = strtok (NULL, " ");
	}
	return &tokensVector;
}
