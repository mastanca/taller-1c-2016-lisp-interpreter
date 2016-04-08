/*
 * Tokenizer.h
 *
 *  Created on: Apr 7, 2016
 *      Author: mastanca
 */

#ifndef SRC_TOKENIZER_H_
#define SRC_TOKENIZER_H_

#include <string>
#include <vector>

class Tokenizer {
private:
	std::vector<std::string> tokensVector;
public:
	// Constructor
	Tokenizer();
	// Destroyer
	virtual ~Tokenizer();
	// Tokenizes the given string, returning the tokens into a Cstring
	std::vector<std::string>* tokenize(std::string string);
};

#endif /* SRC_TOKENIZER_H_ */
