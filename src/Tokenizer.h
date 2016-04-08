/*
 * Tokenizer.h
 *
 *  Created on: Apr 7, 2016
 *      Author: mastanca
 */

#ifndef SRC_TOKENIZER_H_
#define SRC_TOKENIZER_H_

#include <string>

class Tokenizer {
public:
	// Constructor
	Tokenizer();
	// Destroyer
	virtual ~Tokenizer();
	// Tokenizes the given string, returning the tokens into a Cstring
	char* tokenize(std::string string);
};

#endif /* SRC_TOKENIZER_H_ */
