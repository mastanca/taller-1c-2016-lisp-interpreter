/*
 * List.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "List.h"


List::~List() {
}

void List::evaluate() {
	if (this->data.size() == 0){
		this->result = 0;
	} else {
		std::vector<Expression*>::iterator v = data.begin();
		while( v != data.end()) {
			(*v)->evaluate();
			v++;
		}
		this->data.front()->evaluate();
	}
}

std::vector<Expression*>& List::getData() {
	return this->data;
}
