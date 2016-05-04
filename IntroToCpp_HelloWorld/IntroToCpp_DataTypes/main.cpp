/*
	Intro to C++ - Data Types.
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

/*
	Data Types

	signed	 : means it can have negative numbers
	unsigned : means it can only have positive number.

	bool - represents true or false. 1 byte in memory. 8 bits. 1, 0
	char - represents single character. 1 byte is memory. 8 bits. 2^8: 256 range: -128 to +127
	short - 2 bytes in memory. 16 bits. 2^16: 65 536 range: -32 768 to +32 767
	int - 4 bytes in memory. 32 bits. 2^32: ~4 mil range: about -2 mil to +2 mil.
	long long - 8 byte in memory. 64 bits. 2^64: very huge
	float - 4 bytes in memory. 32 bits. real number which can hold decimals. 3.e +/- 32 (7 digits)
	double - 8 bytes in memory. 64 bits.

	Variables:
	container that holds data for you.

	naming comvention.
	name your variables something meaningful.


*/
#include <iostream>

//this your global space
int num1;	//Declaring variables of type int.

int main(void)
{
	//local space
	num1 = 10;	//Always initialize your variables to something before use.

	int num2 = 20;
	int result = 0;

	//sum of num1 and num2
	result = num1 + num2;
	std::cout << "Addition: " << result << std::endl;

	result = num1 * num2;
	std::cout << "Multiplication: " << result << std::endl;

	result = num2 - num1;
	std::cout << "Subtraction: " << result << std::endl;

	result = (num1 + num2) / 2;	//use parenthesis to make something come before division. PEMDAS parenthesis, Exponent, Multiplication, Division, Addition, and Subtraction.
	std::cout << ": " << result << std::endl;

	char c = 'd';
	c -= 32; // same thing as writing c = c + 32;

	std::cout << c << std::endl;

	bool b = 1;	// either be 1(true) or 0(false)
	std::cout << b << std::endl;

	float realNum = 152.5478f;
	float fResult = realNum * 0.97f;	//different types of naming conventions

	//Hungarian = typeNameVariable int iNumber
	//Cammel Case = numOfFrames
	std::cout << fResult << std::endl;

	fResult = (float)(num2 * num1); //type casting
	std::cout << fResult << std::endl;

	/* 
		direferent types of arithmetic 
		+ Addition
		- Subtraction
		* multiplication
		/ division
		% modulous (returns the remainder of the division of the operation).
	*/
	
	std::getchar();

	return 0;
}