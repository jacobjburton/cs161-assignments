/***************************************************************************************************************
** Author: Jacob Burton
** Date: 01/28/2019
** Description: Void function that takes in three int parameters by reference.  It then sorts the values
**              into ascending order (lowest to highest).
***************************************************************************************************************/

#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::endl;
using std::string;

/*void smallSort(int& first, int& second, int& third);

int main()
{
    int first = 99,
        second = -1,
        third = 0;

    smallSort(first, second, third);
    cout << first << ", " << second << ", " << third << endl;

    return 0;  
}*/

void smallSort(int& first, int& second, int& third)
{
    int temp;
    if (first > second)
    {
        temp = first;
        first = second;
        second = temp;
    } 
    if (first > third)
    {
        temp = first;
        first = third;
        third = temp;
    }
    if (second > third)
    {
        temp = second;
        second = third;
        third = temp;
    }
}
