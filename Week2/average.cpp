/************************************************************************************************
** Author: Jacob Burton
** Date: 01/13/2019
** Description:  Asks the user for five numbers and then prints out the average of those numbers 
*************************************************************************************************/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	double a, b, c, d, e, average;
	cout << "Please enter five numbers. \n";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;

	average = (a + b + c + d + e) / 5;
	
	cout << "The average of those numbers is: \n" << average << endl;
	return 0;
}
