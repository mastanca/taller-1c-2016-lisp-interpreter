/*
 * Tokenizer.cpp
 *
 *  Created on: Apr 7, 2016
 *      Author: mastanca
 */

#include "Tokenizer.h"

#include <string.h>
#include <iostream>
#include <string>
#include <vector>


Tokenizer::Tokenizer() {
}

Tokenizer::~Tokenizer() {
}

std::vector<std::string>* Tokenizer::tokenize(std::string string) {
	char *saveptr;
	char* toTokenize = (char*)string.c_str();
	char* tokenized(strtok_r(toTokenize, " ", &saveptr));
	while (tokenized != NULL) {
		std::string newString(tokenized);
		tokensVector.push_back(newString);
		tokenized = strtok_r(NULL, " ", &saveptr);
	}
	return &tokensVector;
}
