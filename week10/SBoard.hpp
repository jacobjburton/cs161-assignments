/****************************************************************************************************************
** Name: Jacob Burton
** Date: 02/16/2019
** Description: Header file for SBoard class.  
*****************************************************************************************************************/

#ifndef SBOARD_HPP
#define SBOARD_HPP

// define SBoard class
class SBoard {
	// internal variable of SBoard class
	private:
		static char board[10][10];
		int tokensPlaced;

	// constructors and methods of SBoard class
	public:
		SBoard::SBoard();
		int getNumTokens();
		int placeToken(int, int);
		void readPlacementsFromFile(int* file);
};
#endif