/********************************************************************************************
** Name: Jacob Burton
** Date: 03/06/2019
** Description: Header file for LineSegment class.
********************************************************************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

// define LineSegment class
class LineSegment {
	// internal variables of the LineSegment Class
	private:
		Point end1;
		Point end2;
	// constructors and methods for the LineSegment Class
	public:
		LineSegment(Point*, Point*);
		void setEnd1(Point*);
		Point getEnd1();
		void setEnd2(Point*);
		Point getEnd2();
		double length();
		double slope();
};

#endif