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
		this->data.front()->evaluate();
	}
}
