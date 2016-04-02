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

	int result = 0;
	bool booleanResult = false;
	int arg1 = 1;
	int arg2 = 2;
	std::cout << "Testing sum: ";
	Sum aSum = Sum(arg1, arg2, result);
	aSum.evaluate();
	std::cout << arg1 << " + " << arg2 << " = " << result << std::endl;

	std::cout << "Testing multiply: ";
	result = 0;
	arg1 = 5;
	arg2 = 3;
	Multiply aMultiply = Multiply(arg1, arg2, result);
	aMultiply.evaluate();
	std::cout << arg1 << " * " << arg2 << " = " << result << std::endl;

	std::cout << "Testing minus: ";
	result = 0;
	arg1 = 90;
	arg2 = 45;
	Minus aMinus = Minus(arg1, arg2, result);
	aMinus.evaluate();
	std::cout << arg1 << " - " << arg2 << " = " << result << std::endl;

	std::cout << "Testing divide: ";
	result = 0;
	arg1 = 18;
	arg2 = 9;
	Divide aDivide = Divide(arg1, arg2, result);
	aDivide.evaluate();
	std::cout << arg1 << " / " << arg2 << " = " << result << std::endl;

	std::cout << "Testing is less than: ";
	booleanResult = true;
	arg1 = -33;
	arg2 = -87;
	IsLessThan anIsLessThan = IsLessThan(arg1, arg2, booleanResult);
	anIsLessThan.evaluate();
	std::cout << arg1 << " < " << arg2 << " = " << std::boolalpha <<
			booleanResult << std::endl;

	std::cout << "Testing is greater than: ";
	booleanResult = false;
	arg1 = 149;
	arg2 = 120;
	IsGreaterThan anIsGreaterThan = IsGreaterThan(arg1, arg2, booleanResult);
	anIsGreaterThan.evaluate();
	std::cout << arg1 << " > " << arg2 << " = " << std::boolalpha <<
			booleanResult << std::endl;

	std::cout << "Testing is equal: ";
	booleanResult = false;
	arg1 = 2;
	arg2 = 2;
	IsEqual anIsEqual = IsEqual(arg1, arg2, booleanResult);
	anIsEqual.evaluate();
	std::cout << arg1 << " == " << arg2 << " = " << std::boolalpha <<
			booleanResult << std::endl;

	return 0;
}


