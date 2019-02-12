/********************************************************************************************************
** Author: Jacob Burton
** Date: 02/05/2019
** Description: Main file for running and testing Box class.              
*******************************************************************************************************/

#include <iostream>
#include "Box.hpp"

int main() {
    Box box1(2.4, 7.1, 5.0);
    Box box2;

    std::cout << "Box 1 Volume: " << box1.calcVolume() << std::endl;
    std::cout << "Box 1 Surface Area: " << box1.calcSurfaceArea() << std::endl;
    std::cout << "Box 2 (default box) Volume: " << box2.calcVolume() << std::endl;
    std::cout << "Box 2 (default box) Surface Area: " << box2.calcSurfaceArea() << std::endl;

    return 0;
}