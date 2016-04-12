/*
 * Setq.cpp
 *
 *  Created on: Apr 12, 2016
 *      Author: mastanca
 */

#include "Setq.h"

#include <iostream>
#include <iterator>
#include <string>
#include <vector>


#include "LispParser.h"
#include "SubVectorService.h"

Setq::~Setq() {
}

void Setq::evaluate() {
}

std::string Setq::getResult() {
	return result;
}

void Setq::parseBody(std::vector<std::string>* subLine, LispParser* parser) {
	variableName = subLine->front();
	int i = 0;
	for (std::vector<std::string>::iterator it = subLine->begin();
			it != subLine->end(); ++it) {
		std::cout << *it << std::endl;
		if (*it == "(") {
			std::vector<std::string> anotherVec = SubVectorService().run(
					subLine, i + 1);
			myExpression = parser->getExpression(&anotherVec);
			it += anotherVec.size();
			i += anotherVec.size();
		} else {
			// We need a vector argument so...
			std::vector<std::string> tempVec;
			tempVec.push_back(*it);
			Expression* tempExpression = parser->getExpression(&tempVec);
			if (tempExpression != NULL)
				// Its NULL if it was a ")"
				myExpression = tempExpression;
		}
		++i;
	}
	std::cout << "I am " << getIdentifier() << " , I am identified by "
			<< variableName << " and my expression is "
			<< myExpression->getResult() << std::endl;
	parser->addGlobalVariable(variableName, myExpression);
}
