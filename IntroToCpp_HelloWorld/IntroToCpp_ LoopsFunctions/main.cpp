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
*/
#include <iostream>
#include <string>

using namespace std;

string name = "This is a string";

int main()
{
start:
	//for loop
	/*for (int i = 0; i < 1000; i++)
	{
		cout << i << " ";
	}*/

	//for each loop
	/*for (char c : name)
	{
		if (c >= 'A' && c <= 'Z')
			c += 32;

		cout << c;
	}*/

	//while loop
	int count = 0;
	//while (count < 100)
	//{
	//	//do this while isRunning is true;
	//	cout << count++ << " ";
	//}

	//do while loops
	/*do
	{
		cout << count++ << " ";
	} 
	while (count < 100);*/

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
	return 0;
}