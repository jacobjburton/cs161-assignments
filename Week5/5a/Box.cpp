/********************************************************************************************************
** Author: Jacob Burton
** Date: 02/05/2019
** Description: Constructors for Box class.  Default constructor that initializes 3 parameters to 1.
**              Constructor that takes in 3 parameters and intializes 3 parameters to those values.
**              Method to calculate and return volume of the Box.  Method to calculate and return
**              surface area of the Box.
********************************************************************************************************/

#include "Box.hpp"

/********************************************************************************************************
** Default constructor that initializes height, width, and length of the box to 1
********************************************************************************************************/
Box::Box() {
    setHeight(1);
    setWidth(1);
    setLength(1);
}

/********************************************************************************************************
** Constructor that takes 3 double parameters and uses them to initialize height, width, and
** and length of the Box
********************************************************************************************************/
Box::Box(double heightIn, double widthIn, double lengthIn) {
    setHeight(heightIn);
    setWidth(widthIn);
    setLength(lengthIn);
}

/********************************************************************************************************
** Set height for the Box
********************************************************************************************************/
void Box::setHeight(double heightIn) {
    height = heightIn;
}

/********************************************************************************************************
** Set width for the Box
********************************************************************************************************/
void Box::setWidth(double widthIn) {
    width = widthIn;
}

/********************************************************************************************************
** Set length for the Box
********************************************************************************************************/
void Box::setLength(double lengthIn) {
    length = lengthIn;
}

/********************************************************************************************************
** Method that calculates and returns the volume of the Box
********************************************************************************************************/
double Box::calcVolume() {
    volume = height * width * length;
    return volume;
}

/********************************************************************************************************
** Method that calculates and returns the surface area of the Box
********************************************************************************************************/
double Box::calcSurfaceArea() {
    surfaceArea = 2 * (height * width) + 2 * (height * length) + 2 * (width * length);
    return surfaceArea;
}