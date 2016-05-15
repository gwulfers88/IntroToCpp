/*
	Intro To Cpp - Function overload and Templates
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

	Date: 5/13/2016
	----------------------
	main.cpp

	Function overloading is when you have two functions that have the same name and take different types of data for their parameters
	int		Add(int a, int b);
	float	Add(float a, float b);
	double	Add(double a, double b);

	templates:
	template<class type>
	type Sub(type a, type b)
	{
	type res;
	res = a - b;
	return res;
	}

	template<class type, class b>
	type Sub(type a, b b)
	{
	type res;
	res = a - b;
	return res;
	}

*/

#include <iostream>

using namespace std;

namespace Math
{
	int Add(int a, int b)
	{
		int result = a + b;
		return result;
	}

	int Sub(int a, int b)
	{
		int res = a - b;
		return res;
	}

	float div(float a, float b)
	{
		float res = a - b;
		return res;
	}
};

using namespace Math;

int main()
{
	bool isRunning = true;
	while (isRunning)
	{
		int input = -1;

		cout << "What would you like to do:\n";
		cout << "1. Addition\n";
		cout << "2. Subtraction\n";
		cout << "3. Division\n";
		cout << "4. Exit\n";

		cin >> input;

		if (input > 0)
		{
			int res = 0;
			float fRes = 0;
			int data[2] = { 0 };
			float fData[2] = { 0 };

			switch (input)
			{
			case 1:	//Addition

				cout << "\nPlease enter some numbers:\n";

				for (int i = 0; i < 2; i++)
				{
					cin >> data[i];
				}

				res = Add(data[0], data[1]);
				cout << "Result is " << res << "\n";

				break;

			case 2:	//Sub

				cout << "Please enter some numbers:\n1. ";

				for (int i = 0; i < 2; i++)
				{
					cin >> data[i];
				}

				res = Sub(data[0], data[1]);
				cout << "Result is " << res << "\n";

				break;

			case 3:	//Division


				cout << "Please enter some numbers:\n1. ";

				for (int i = 0; i < 2; i++)
				{
					cin >> fData[i];
				}

				fRes = Math::div(fData[0], fData[1]);
				cout << "Result is " << fRes << "\n";

				break;

			case 4:
				isRunning = false;
				break;

			default:	//Invalid input
				cout << "\nInvalid option\n";
			}

			system("pause");
		}
	}

	return 0;
}