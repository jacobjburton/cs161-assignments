/****************************************************************************************************************
** Name: Jacob Burton
** Date: 02/14/2019
** Description: Header file for SBoard class.  
*****************************************************************************************************************/

#ifndef SBOARD_HPP
#define SBOARD_HPP

#include <string>

// define SBoard class
class SBoard {
	// internal variable of SBoard class
	private:
		char board[10][10];
		int tokensPlaced;

	// constructors and methods of SBoard class
	public:
		SBoard();
		int getNumTokens();
		int placeToken(int, int);
		void readPlacementsFromFile(std::string);
		char printBoard();
};
#endif