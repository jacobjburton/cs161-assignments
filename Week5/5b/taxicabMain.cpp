/********************************************************************************************************
** Author: Jacob Burton
** Date: 02/05/2019
** Description: Main file for running and testing Taxicab class.              
*******************************************************************************************************/

#include <iostream>
#include "Taxicab.hpp"

int main() {
    Taxicab cab1;
    Taxicab cab2(5, -8);
    cab1.moveX(3);
    cab1.moveY(-4);
    cab1.moveX(-1);
    std::cout << cab1.getDistanceTraveled() << std::endl;
    cab2.moveY(7);
    std::cout << cab2.getYCoord() << std::endl;
}