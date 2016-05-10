/*
	Intro To Cpp - Loops & Functions
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

	Date: 5/9/2016
	----------------------
	main.cpp

	for loops

	for( intialization; condition; increment )
	{
		1...n
	}

	for each loop

	for( object : container )
	{
	   //do stuff here
	}

	while loops
	while( condition[s] )
	{
		//do stuff here
	}

	do while loops

	do
	{
		//Do stuff here
	}while( condition )


	functions
	
	type name( parameters, more parameters, and more)
	{
		//do stuff

		return type_value;
	}


	start:
	//for loop
	/*for (int i = 0; i < 1000; i++)
	{
	cout << i << " ";
	}

	//for each loop
	for (char c : name)
	{
	if (c >= 'A' && c <= 'Z')
	c += 32;

	cout << c;
	}

	//while loop
	int count = 0;
	//while (count < 100)
	//{
	//	//do this while isRunning is true;
	//	cout << count++ << " ";
	//}

	//do while loops
	do
	{
	cout << count++ << " ";
	}
	while (count < 100);

	//Jump statements
	//We want to define a lable to let the program know where to jump to
	loop:	//loop lable

	cout << count++ << " ";

	if (count < 100)
	{
		goto loop;
	}


	// Switch statements
	int input = 0;
	printf("Input any number please: ");
	cin >> input;

	switch (input)
	{
	case 0:
		printf("Your number is Zero!\n");
		break;

	case 1:
		printf("Your number is One!\n");
		break;

	case 2:
		printf("Your number is Two!\n");
		break;

	default:
		printf("Your number is What ever!\n");
	}

	system("pause");

	exit:	//exit lable
*/
#include <iostream>
#include <string>

using namespace std;

int Add(int a, int b);

int Add(int a, int b)
{
	int result = 0;

	result = a + b;
	
	return result;
}

void passByRef(int *ref)
{
	*ref /= 2;
}

//The compiler replaces the function call with the actual function block.
inline int Subtract(int a, int b)
{
	int res = a - b;
	return res;
}

//Recursive: a function that calls itself.
//Solve what 5! (5 Factorial). n! = n * n-1 * n-2 * n-3 .... 1. 5! = 5 * 4 * 3 * 2 * 1 = 120.
int factorial(int n)
{
	if (n < 1)
		return 1;

	int res = factorial(n - 1);

	printf("%d * ", n);

	return res * n;
}

int main()
{
	int ref = 100;
	passByRef(&ref);

	printf("ref: %d \n", ref);

	int res = Add(10, 10);

	//printf("Add: %d \n", res);

	res = Subtract(10, 10);
	printf("Sub: %d \n", res);

	int n = 10;
	res = factorial(n);
	printf("\n%d! factorial is %d\n", n, res);

	getchar();

	return 0;
}
