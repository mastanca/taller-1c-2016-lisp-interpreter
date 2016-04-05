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
#include "lispFunctions/List.h"
#include "lispFunctions/Append.h"
#include "lispFunctions/Car.h"
#include "lispFunctions/Cdr.h"
#include "Constant.h"

int main(){
	std::string testing = "(+ (+ 2 (- 10 7) (* 2 2)))";
	std::cout << "Original string: " << testing << std::endl;
	LispParser aLispParser = LispParser();
	aLispParser.parseLispLine(testing);
	return 0;
}


