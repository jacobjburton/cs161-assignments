/********************************************************************************************************
** Author: Jacob Burton
** Date: 02/13/2019
** Description: Main file for running and testing Team class.              
*******************************************************************************************************/

#include <iostream>
#include "Team.hpp"
#include "Player.hpp"
#include <string>

int main() {
	Player p1("Charlotte", 24, 10, 7);
	Player p2("Emily", 21, 13, 9);
	Player p3("Anne", 20, 10, 8);
	Player p4("Jane", 19, 10, 10);
	Player p5("Mary", 18, 11, 8);
	p5.setRebounds(12);
	Player p6;

	Team team1(p1, p2, p3, p4, p5);

	Player p = team1.getShootingGuard();
	std::cout << p.getName() << std::endl;	
	return 0;
}