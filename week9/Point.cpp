/********************************************************************************************
** Name: Jacob Burton
** Date: 03/06/2019
** Description: Constructors and methods of the player class.  Default constructor
**              initializes x/y coordinates to 0.0.  Constructor that takes in two doubles
**              and initializes them to the x and y coordinates.  Get/Set methods for
**              x/y coordinates.  Get distance method that takes in a Point as a parameter
**              and calculates the distance between that Point and another Point.
********************************************************************************************/

#include "Point.hpp"

// Default constructor initializes x and y coordinates to 0.0
Point::Point() {
	xCoord = 0.0;
	yCoord = 0.0;
}

// Constructor that takes in two double parameters and initializes x and y coordinates
// to those values.
Point::Point(double xIn, double yIn) {
	xCoord = xIn;
	yCoord = yIn;
}

// Set method for x coordinate.  Updates Point's x coordinate to parameter value.
void Point::setXCoord(double xIn) {
	xCoord = xIn; 
}

// Get method for x coordinate.  Returns Point's x coordinate.
double Point::getXCoord() {
	return xCoord;
}

// Set method for y coordinate.  Updates Point's y coordinate to parameter value.
void Point::setYCoord(double yIn) {
	yCoord = yIn;
}

// Get method for y coordinate.  Returns Point's y coordinate.
double Point::getYCoord() {
	return yCoord;
}
