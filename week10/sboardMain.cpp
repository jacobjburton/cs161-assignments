/****************************************************************************************************************
** Name: Jacob Burton
** Date: 02/14/2019
** Description: Main file for testing SBoard class.
*****************************************************************************************************************/

#include "SBoard.hpp"
#include <iostream>

int main() {
	SBoard b1;
	int returnVal;

	// b1.placeToken(2, 1);
	// b1.placeToken(2, 3);
	// b1.placeToken(2, 7);
	// b1.placeToken(2, 9);
	// b1.placeToken(3, 0);
	// b1.placeToken(3, 3);
	// b1.placeToken(4, 3);
	// b1.placeToken(4, 5);
	// b1.placeToken(5, 0);
	// b1.placeToken(5, 3);
	// b1.placeToken(5, 4);
	// b1.placeToken(5, 8);
	// b1.placeToken(6, 0);
	// b1.placeToken(6, 2);
	// b1.placeToken(6, 5);
	// b1.placeToken(6, 7);
	// b1.placeToken(7, 2);
	// b1.placeToken(7, 3);
	// returnVal = b1.placeToken(6, 3);
	b1.readPlacementsFromFile("input.txt");

	b1.printBoard();
	std::cout << returnVal << std::endl;
	return 0;
}