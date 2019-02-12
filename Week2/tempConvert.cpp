/*************************************************************************************************
** Author: Jacob Burton
** Date: 1/15/2019
** Description: Asks user to input temperature in Celsius.  Displays temperature converted
** 	        to Fahrenheit.
*************************************************************************************************/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	double celsius, fahrenheit;
	cout << "Please enter a Celsius temperature. \n";
	cin >> celsius;

	fahrenheit =  celsius * 9 / 5 + 32;

	cout << "The equivalent Fahrenheit temperature is: \n" << fahrenheit << endl;
	return 0;
}
