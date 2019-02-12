/**********************************************************************************************************************
** Author: Jacob Burton
** Date: 01/19/2019
** Description:  Ask user how many integers they would like to enter, assuming the user will enter only integers >= 1
**               Prompt the user to enter that many integers.  After all numbers have been entered the program will
**               display the largest and smallest of those numbers.
***********************************************************************************************************************/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int counter = 0;
    int index = 0;
    int min;
    int max;
    int current;

    cout << "How many integers would you like to enter? \n";
    cin >> counter;

    cout << "Please enter " << counter << " integers. \n";

    while (index < counter)
    {
        cin >> current;

        if (index == 0)
        {
            max = current;
            min = current;
        }
        else 
        {
            if(current <= min)
            {
                min = current;
            }
            if (current >= max)
            {
                max = current;
            }
        }

        index += 1;
    }

    cout << "min: " << min << "\nmax: " << max << endl;

    return 0;
}
