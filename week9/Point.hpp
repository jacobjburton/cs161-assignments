/********************************************************************************************
** Name: Jacob Burton
** Date: 03/06/2019
** Description: Header file for Point class.
********************************************************************************************/

#ifndef POINT_HPP
#define POINT_HPP

//define Point class
class Point {
	//internal variables of Player class
	private:
		double xCoord;
		double yCoord;
	//constructors and methods of Player class
	public:
		Point();
		Point(double, double);
		void setXCoord(double);
		double getXCoord();
		void setYCoord(double);
		double getYCoord();
		double distanceTo(Point);
};
#endif