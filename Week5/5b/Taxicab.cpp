/********************************************************************************************************
** Author: Jacob Burton
** Date: 02/05/2019
** Description: Constructors for Taxicab class.  Default constructor that initializes 3 parameters to 0.
**              Constructor that takes in 2 parameters and intializes 2 parameters to those values,
**              and distanceTraveled to 0.  Method to get x coordinate.  Method to get y coordinate.
**              Method to move x coordinate int parameter distance.  Method to move y coordinate int
**              paramenter distance.  Method to get distance traveled by taxicab.  
********************************************************************************************************/

#include "Taxicab.hpp"
#include <cmath>

/********************************************************************************************************
** Default constructor that initializes x, y, distanceTraveled to 0
********************************************************************************************************/
Taxicab::Taxicab() {
    x = 0;
    y = 0;
    distanceTraveled = 0;
}

/********************************************************************************************************
** Constructor that initializes x, y, to input parameter values, distanceTraveled to 0
********************************************************************************************************/
Taxicab::Taxicab(int xIn, int yIn) {
    x = xIn;
    y= yIn;
    distanceTraveled = 0;
}

/********************************************************************************************************
** Get x for Taxicab
********************************************************************************************************/
int Taxicab::getXCoord() {
    return x;
}

/********************************************************************************************************
** Set y for Taxicab
********************************************************************************************************/
int Taxicab::getYCoord() {
    return y;
}

/********************************************************************************************************
** Move x direction by specified amount, update distanceTravelled
********************************************************************************************************/
void Taxicab::moveX(int xMove) {
    distanceTraveled += std::abs(xMove);
    x = x + xMove;
}

/********************************************************************************************************
** Move y direction by specified amount, update distanceTravelled
********************************************************************************************************/
void Taxicab::moveY(int yMove) {
    distanceTraveled += std::abs(yMove);
    y = y + yMove;
}

/********************************************************************************************************
** Get distanceTravelled value
********************************************************************************************************/
int Taxicab::getDistanceTraveled() {
    return distanceTraveled;
}
