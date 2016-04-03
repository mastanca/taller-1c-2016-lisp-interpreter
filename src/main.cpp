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


int main(){
	std::string testing = "(defun op1 (lista) (+ (car lista) (op1 "
			"(cdr lista))))";
	std::cout << "Original string: " << testing << std::endl;
	LispParser aLispParser = LispParser();
	aLispParser.parseLispLine(testing);

	// Append testing
	int result = 0;
	int arg1 = 8;
	int arg2 = 10;
	Sum aSum = Sum(arg1, arg2, result);
	std::vector<Expression*> data;
	data.push_back(&aSum);
	List aList = List(data, result);

	int result2 = 0;
	int arg3 = 5;
	int arg4 = 5;
	Multiply aMultiply = Multiply(arg3, arg4, result2);
	std::vector<Expression*> data2;
	data2.push_back(&aMultiply);
	List anotherList = List(data2, result2);

	std::vector<Expression*> data3;
	int result3 = 0;
	List resultingList = List(data3, result3);
	Append anAppend = Append(aList, anotherList, resultingList);
	anAppend.evaluate();

	anAppend.getResultingList().evaluate();
	std::cout << result << std::endl;
	std::cout << result2 << std::endl;
	std::cout << result3 << std::endl;


	return 0;
}


