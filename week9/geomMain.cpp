// Main file for testing LineSegment and Point Class files

#include "LineSegment.hpp"
#include <iostream>

int main() {
	Point p1(-1.5, 0.0);
	Point p2(1.5, 4.0);
	Point p3(4.3, 7.52);
	Point p4(-17.0, 1.5);
	LineSegment ls1(&p3, &p4);
	double distance = p1.distanceTo(p2);
	double length = ls1.length();
	double slope = ls1.slope();

	std::cout << "Distance: " << distance << std::endl;
	std::cout << "Length: " << length << "\nSlope: " << slope << std::endl;
	
	return 0;
}