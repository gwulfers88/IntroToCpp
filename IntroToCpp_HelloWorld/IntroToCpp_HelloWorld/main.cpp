/*
	Intro to C++ - Hello World.
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

	This is the starting point of the program.
	We will be writing a simple program that outputs
	"Hello World."
*/

/*
	What is a program?
	a Program is just a bunch of instructions to tell the computer what you want to do.
	
	All programs have an entry point. This entry point is called main() in C and C++.
	A Function is a block of code that does something.

	structure of a function:

	return_type functionName( parameters )
	{
		//do stuff
		return type_value;
	}
*/
//A Compiler directive lets the compiler know what you want it to add to your code/program.
#include <stdio.h> //all compiler directives start with a # sign. This directive tells the compiler to add stdio file into our program.

// STD = Standard. IO = Input/Output.

// This is the start or entry point of our program.
int main(void)
{
	// run the program here
	printf("Hello World!"); // a string is more than one letter. "Hello World!".

	//Pause the program.
	getchar();	//It waits for the user to press Enter before continuing.

	//Make sure that every line of code with in a code block ends with a semicolon ';'.
	return 0;	// Exit the program. the return value should be zero if the program ran as it should, with no errors.
}