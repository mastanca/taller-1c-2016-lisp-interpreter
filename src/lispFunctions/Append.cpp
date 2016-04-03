/*
 * Append.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: mastanca
 */

#include "Append.h"

Append::~Append() {
}

void Append::evaluate() {
	std::vector<Expression*> listData = this->list1.getData();
	std::vector<Expression*>::iterator v = listData.begin();
	while( v != listData.end()) {
		this->resultingList.getData().push_back(*v);
		v++;
	}

	listData = this->list2.getData();
	v = listData.begin();
	while (v != listData.end()) {
		this->resultingList.getData().push_back(*v);
		v++;
	}
}

List& Append::getResultingList() {
	return resultingList;
}
