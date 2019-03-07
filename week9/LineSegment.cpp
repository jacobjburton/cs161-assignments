/********************************************************************************************
** Name: Jacob Burton
** Date: 03/06/2019
** Description: Constructor for LineSegment class.  Initializes LineSegment with 2 Points
**              by taking in the address of those points as parameters.  Get/Set methods
**              for both end Points. Method to calculate length of line between two Points.
**              Method to calculate slope of the line between two Points.
********************************************************************************************/

#include "LineSegment.hpp"
#include <iostream>

// Constructor initializes the two Point-pointers from the address parameters.
LineSegment::LineSegment(Point* end1In, Point* end2In) {
	setEnd1(end1In);
	setEnd2(end2In);
}

// Set method for endpoint 1
void LineSegment::setEnd1(Point *end1In) {
	end1 = *end1In;
}

// Get method for endpoint 1 
Point LineSegment::getEnd1() {
	return end1;
}

// Set method for endpoint 2
void LineSegment::setEnd2(Point *end2In) {
	end2 = *end2In;
}

// Get method for endpoint 2
Point LineSegment::getEnd2() {
	return end2;
}

// Length method returns length of line segment
double LineSegment::length() {
	return (end1).distanceTo(end2);
}

// Slope method returns the slope of the line segment
double LineSegment::slope() {
	return ((end2.getYCoord() - end1.getYCoord()) / (end2.getXCoord() - end1.getXCoord())); 
}
