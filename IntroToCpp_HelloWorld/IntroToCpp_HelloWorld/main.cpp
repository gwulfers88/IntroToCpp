/*
IntroToCpp - Tutorials for beginners.

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
*/

// Comments is a good thing!!!

/*
What is a program? instructions that tell the computer what to do.


Data types

8	4	2	1
--------------
0	0	0	1
0	0	1	0
0	0	1	1 = 2 + 1 = 3
0	1	0	0 = 4
0	1	0	1 = 5
--------------
1	1	1	1 = 15

Binary is a base two meanning 1 and 0.

unsigned	= meaning positive numbers only.
signed		= meaning negative and positive numbers.

bool - boolean		- 1 byte in size. 8 bits: 0000 0000 : 1 or 0, true or false
char - character	- 1 byte in size. 8 bits: 0000 0000 : 2^8 = 255 -> 255/2 -> -128 to 127
short - short		- 2 bytes in size. 16 bits: 0000 0000 0000 0000 : 2^16 = 65,535/2 = -32,768 to 32,767
int - integer		- 4 bytes in size. 32 bits: 0000 0000 0000 0000 0000 0000 0000 0000 : 2^32 = 4 mil/2 = -2 mil to 2 mil
long - same as int

float - float		- 4 bytes. 32 bits.
double - double		- 8 bytes. 64 bits.
void.
*/
//Compiler directives start with #. This lets the compiler know to do. Like include other files for use with out program
#include <stdio.h>	//This line of code includes a header file into your program. std = standard. io = input / output

//Entry point of a program in C/C++
//type name_of_Function( parameters )
int main(void)
{
	//output hello world! to the console.
	printf("Hello World!");

	//pause
	getchar();	// <--- it is going to stop us and ask for keyboard input.

	return 0;	//exits the program. returning zero means that the program exited without an error.
}