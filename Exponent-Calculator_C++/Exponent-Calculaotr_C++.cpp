/* Author: Abuzar Noorali
Purpose/Description: This program calculates exponents using a function.
*/

#include <iostream>
#include <string>
using namespace std;

int integerPower(int base, int exponent)				//Declare integerpower function, return type of an int.
{
	int result = 1;										//Create and initialize result variable with 1 if user enters a 0 as the exponent

	while (exponent != 0)								//Calculate the result by multiplying the base by itself for each decrement of the exponent
	{
		result = result * base;
		exponent--;
	}

	return (result);									//Return result
}



int main()
{
	int base = 0;										//Hold user base input
	int exponent = 0;									//Hold user exponent input
	int result = 0;										//Hold result

	cout << "Please enter a base number: \n";			//Get a base from user
	cin >> base;

	cout << "Please enter an exponent: \n";				//Get an exponent from user
	cin >> exponent;

	result = integerPower(base, exponent);				//Call function integer power

	cout << "\nAnswer: \n";								//Set up answer display

	cout << result << "\n\n";							//Display result to user

	
	return 0;
}