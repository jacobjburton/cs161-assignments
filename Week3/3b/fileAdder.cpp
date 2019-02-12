/************************************************************************************
** Author: Jacob Burton
** Date: 01/23/2019
** Description: Asks user to enter a filename.  Reads the name of the file and
**              then opens it.  Reads the integers in the file and adds them
**              together then sends the sum to a file called sum.txt, and displays
**              "result written to sum.txt". 
************************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;

int main()
{
    int value,
        count = 0,
        sum = 0;
    string fileName = "";
    ifstream inputFile;
    ofstream outputFile;

    cout << "Please enter your filename. \n";
    cin >> fileName;

    inputFile.open(fileName);

    if (inputFile)
    {   
        while (inputFile >> value)
        {
            sum += value;
        }

        inputFile.close();
        outputFile.open("sum.txt");
        outputFile << sum << endl;
        outputFile.close();

        cout << "result written to sum.txt" << endl;
    }
    else
    {
        cout << "could not access file" << endl;
    }

    return 0;
} 
