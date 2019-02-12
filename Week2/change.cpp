/*********************************************************************************************
** Author: Jacob Burton
** Date: 01/15/2019
** Description: Asks the user for an integer number of cents, from 0 to 99.
**              Outputs how many of each type of coin would represent that amount with the
**              fewest number of coins.
*********************************************************************************************/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int input, quarters, dimes, nickels, pennies;
	cout << "Please enter an amount in cents less than a dollar. \n";
	cin >> input;

	quarters = input / 25;
	input = input % 25;
	dimes = input / 10;
	input = input % 10;
	nickels = input / 5;
	input = input % 5;
	pennies = input;

	cout << "Your change will be: \n";
	cout << "Q: " << quarters;
	cout << "\nD: " << dimes;
	cout << "\nN: " << nickels;
	cout << "\nP: " << pennies << endl;  
}
