/********************************************************************************************************
** Author: Jacob Burton
** Date: 01/28/2019
** Description: Asks user to input a falling time in seconds. Calculates the falling distance
**              and returns that distance in meters.
*******************************************************************************************************/
#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*double fallDistance(double);

int main()
{
    double fallTime;
    double distance;

    cout << "Please input a falling time in seconds: \n";
    cin >> fallTime;

    distance = fallDistance(fallTime);

    cout << "An object that falls for " << fallTime;
    cout << " seconds will travel " << distance;
    cout << " meters.\n" << endl;
    
    return 0;
}*/

double fallDistance(double fallTime)
{
    double gravity = 9.8;
    double distance;
    
    distance = 0.5 * gravity * pow(fallTime, 2);     
        
    return distance;
}
