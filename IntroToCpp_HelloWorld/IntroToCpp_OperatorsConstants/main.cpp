/*
	Intro to C++ - Operators and Contants.
	Copyright (C) 2016  George Wulfers

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.

	Date: 5/2/2016
	----------------------
	main.cpp


*/
#include <stdio.h>

/*
	Constants:

	variable that contains same value as startup and cannot be changed.
*/

const float PI = 3.14159265359f;	//Make variables constant if they are not meant to change overtime.

/* 
	Operators:

	Arithmetic Operators: +, -, *, /, %
	Bitwise operators: &(AND) |(OR) ^(XOR) ~(NOT)
	Conditional Operators: &&(AND) ||(OR) !(NOT) !=(NOT EQUALS) ==(EQUALS) <(LESS THAN) >(GREATER THAN) 
	+=, -=, *=, /=, !=, &=, |=, <=, >=
*/

/*
	Formatting Strings:
	\n - new line
	\r - return key
	\t - Tab
	\\ - backslach
	\" - Quotations
	\'
*/
int main(void)
{
	int a = 20;
	int b = 11;
	
	//Compare a and b
	//When we have an && both conditions have to be true
	if (a > 10 && b < 10) 
	{
		//If the statement above is true then we runt this code.
		printf("true\n");
	}
	else
	{
		//if it is not true then we run this code
		printf("false\n");
	}

	//Compare a and b
	if (a > 10 || b < 10) 
	{
		//If the statement above is true then we runt this code.
		printf("A is true\n");
		
	}
	else if (a < 10 || b > 10)
		printf("B is true\n");
	else
	{
		//if it is not true then we run this code
		printf("false\n");
	}

	//Arrays: You can store multiple values of the same type
	int variable = 10;
	float arr[] = {1, 2, 3, 4, 5}; // 5 elements. they start from index of 0 to index of 5 - 1.
	float arr1[5] = {0};

	//This is called a for loop. for( start point; conditional value; increment)
	for (int i = 4; i > -1; i--)	//i++ = i += 1 = i = i + 1;
	{
		printf("array: %.02f\n", arr1[i]);	// %d, %f, %s, %c
	}

	getchar();

	return 0;
}