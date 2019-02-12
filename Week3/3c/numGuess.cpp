/**********************************************************************************************
** Author: Jacob Burton
** Date: 01/23/2019
** Description: Ask user for a number. Asks user to guess a number, and tells the user if
**              their guess is too high (> first number) or too low (< first number).
**              Continues to prompt user for a guess until they guess the first number.
***********************************************************************************************/

#include <iostream>
#include <string>

using std::cin; 
using std::cout;
using std::endl;

int main()
{
    int numGuesses = 1,
        numToGuess,
        guess;

    cout << "Enter the number for the player to guess. \n";
    cin >> numToGuess;

    cout << "Enter your guess. \n";
    cin >> guess;
    
    while (guess != numToGuess)
    {
        if (guess > numToGuess)
        {
            cout << "Too high - try again. \n";
            cin >> guess;
        }
        else
        {
            cout << "Too low - try again. \n";
            cin >> guess;
        }
        numGuesses++;
    }

    cout << "You guessed it in " << numGuesses << " tries." << endl;

    return 0; 
}
