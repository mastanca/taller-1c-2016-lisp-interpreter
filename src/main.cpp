/*
 * main.cpp
 *
 *  Created on: Mar 31, 2016
 *      Author: mastanca
 */

#include <iostream>
#include <string>

#include "LispParser.h"
#include "lispFunctions/Sum.h"
#include "lispFunctions/Multiply.h"
#include "lispFunctions/Minus.h"
#include "lispFunctions/IsLessThan.h"
#include "lispFunctions/IsGreaterThan.h"
#include "lispFunctions/IsEqual.h"
#include "lispFunctions/Divide.h"


int main(){
	std::string testing = "(defun op1 (lista) (+ (car lista) (op1 "
			"(cdr lista))))";
	std::cout << "Original string: " << testing << std::endl;
	LispParser aLispParser = LispParser();
	aLispParser.parseLispLine(testing);

	return 0;
}


