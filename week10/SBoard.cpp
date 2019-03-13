/****************************************************************************************************************
** Name: Jacob Burton
** Date: 02/16/2019
** Description: Constructor and methods for SBoard class.  Constructor initializes 10x10 empty board and count 
**              of tokens placed to 0.  Method to get number of tokens placed.  Method to place tokens at parameter
**              designated location on board and return number of squares completed on board by placement of that
**              token - returns -1 if token already placed at that spot.  Method to read a file and place tokens
**              in spaces indicated by the file - ignores return value (for example, if it tries to place a token
**              in a space where there is already a token).
*****************************************************************************************************************/

#include "Sboard.hpp"
#include <string>

// Constructor initializes an empty 10x10 board, count of tokens placed to 0
SBoard::SBoard() {
	char temp[10][10] = {
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'}
	};
	std::memcpy(&board[0][0], &temp[0][0], sizeof board);
	tokensPlaced = 0;
}

// Method returns the number of tokens placed so far
int SBoard::getNumTokens() {
	return tokensPlaced;
}

// Method places a token at spot on board designated by 2 int parameters.  Returns -1 if a token is already placed
// at that location.  Otherwise returns the number of squares completed on board by placing the token.
int SBoard::placeToken(int rowIn, int colIn) {
	if (board[rowIn][colIn] == 'x') {
		return -1;
	} else {

	}
}

// Method reads a txt file and places tokens at places designated by file data.