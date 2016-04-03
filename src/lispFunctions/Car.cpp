/*
 * Car.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: mastanca
 */

#include "Car.h"

Car::~Car() {
}

void Car::evaluate() {
	if (inputList.getData().size() == 0){
		this->result = 0;
	} else {
		this->result = inputList.getData().front();
	}
}
