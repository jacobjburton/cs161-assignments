/****************************************************************************************************************
** Name: Jacob Burton
** Date: 02/14/2019
** Description: Constructor and methods for SBoard class.  Constructor initializes 10x10 empty board and count 
**              of tokens placed to 0.  Method to get number of tokens placed.  Method to place tokens at parameter
**              designated location on board and return number of squares completed on board by placement of that
**              token - returns -1 if token already placed at that spot.  Method to read a file and place tokens
**              in spaces indicated by the file - ignores return value (for example, if it tries to place a token
**              in a space where there is already a token).
*****************************************************************************************************************/

#include "SBoard.hpp"
#include <fstream>
#include <string>
#include <iostream>

// Constructor initializes an empty 10x10 board (char '.' = empty, char 'x' = token place at that spot),
// count of tokens placed to 0
SBoard::SBoard() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			board[i][j] = '.';
		}
	}
	tokensPlaced = 0;
}

// Method returns the number of tokens placed so far
int SBoard::getNumTokens() {
	return tokensPlaced;
}

// Method places a token at spot on board designated by 2 int parameters.  Returns -1 if a token is already placed
// at that location.  Otherwise returns the number of squares completed on board by placing the token.
int SBoard::placeToken(int rowIn, int colIn) {
	int checkRowsDown = 9 - rowIn;
	int checkColumnsRight = 9 - colIn;
	int checkRowsUp = 9 - checkRowsUp;
	int checkColumnsLeft = 9 - checkColumnsLeft;
	int largestPossibleSquare, maxRowSize, maxColumnSize;
	int sizeBeingChecked = 1;
	int squaresCompleted = 0;
	int spotsChecked = 100;
	if (board[rowIn][colIn] == 'x') {
		return -1;
	} else {
		board[rowIn][colIn] = 'x';
		tokensPlaced++;
	}
	if (checkRowsDown > checkRowsUp) {
		maxRowSize = checkRowsDown;
	} else {
		maxRowSize = checkRowsUp;
	}
	if (checkColumnsLeft > checkColumnsRight) {
		maxColumnSize = checkColumnsLeft;
	} else {
		maxColumnSize = checkColumnsRight;
	}
	if (maxRowSize > maxColumnSize) {
		largestPossibleSquare = maxColumnSize;
	} else {
		largestPossibleSquare = maxRowSize;
	}
	for (int i = 0; i <= largestPossibleSquare; i++) {
		if (colIn - (i + 1) >= 0 && board[rowIn][colIn - (i + 1)] == 'x') {
			if (rowIn - (i + 1) >= 0 && board[rowIn - (i + 1)][colIn - (i + 1)] == 'x') {
				if (board[rowIn - (i + 1)][colIn] == 'x') {
					squaresCompleted++;
				}
			}
			if (rowIn + (i + 1) <= 9 && board[rowIn + (i + 1)][colIn - (i + 1)] == 'x') {
				if (board[rowIn + (i + 1)][colIn] == 'x') {
					squaresCompleted++;
				}
			}
		}
		if (colIn + (i + 1) <= 9 && board[rowIn][colIn + (i + 1)] == 'x') {
			if (rowIn - (i + 1) >= 0 && board[rowIn - (i + 1)][colIn - (i + 1)] == 'x') {
				if (board[rowIn - (i + 1)][colIn] == 'x') {
					squaresCompleted++;
				}
			}
			if (rowIn + (i + 1) <= 9 && board[rowIn + (i + 1)][colIn + (i + 1)] == 'x') {
				if (board[rowIn + (i + 1)][colIn] == 'x') {
					squaresCompleted++;
				}
			}
		}
	}
	return squaresCompleted;
}

// Method reads a txt file and places tokens at places designated by file data by calling placeToken method.
// Ignores return value of placeToken method.
void SBoard::readPlacementsFromFile(std::string fileName) {
	int j, k, row, column;
	std::ifstream inputFile;
	inputFile.open(fileName.c_str());
	if (inputFile) {
		while (inputFile >> j >> k) {
			row = j;
			column = k;
			placeToken(row, column);
		}
		//std::cout << "Tokens placed" << std::endl;
	}//else {
		//std::cout << "Could not access file" << std::endl;
	//}
	inputFile.close();
}

// Method that prints board for testing
char SBoard::printBoard() {
		for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << board[i][j];;
		}
		std::cout << std::endl;
	}
}