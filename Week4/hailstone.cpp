/*************************************************************************************************************************
** Author: Jacob Burton
** Date: 01/28/2019
** Description: Hailstone takes a positive integer as a paramenter.  If it is even, it divides that integer by two.
**              If it is odd, it multiplies it by three and adds one.  It then takes the new value and performs the
**              same operation on it.  The function continues this until the result is 1, and returns the number of
**              steps taken to reach 1.
*************************************************************************************************************************/  

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/*int hailstone(int startingInt);

int main()
{
    int startingInt,
        steps;

    cout << "Input a starting integer: ";
    cin >> startingInt;

    steps = hailstone(startingInt);

    cout << "Number of steps to reach 1: " << steps << endl;

    return 0;
}*/

int hailstone(int startingInt)
{
    int count = 0,
        stepValue = startingInt;

    while(stepValue != 1)
    {
        if (stepValue % 2 == 0)
        {
            stepValue = stepValue / 2;
        }
        else 
        {
            stepValue = stepValue * 3 + 1;
        }
        count += 1;
    }
    return count;
}
