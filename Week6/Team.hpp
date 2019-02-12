/********************************************************************************************************
** Author: Jacob Burton
** Date: 02/11/2019
** Description: Class specification file for Team class.  Declares the Team class that has 5 data
**              members of type Player: point guard, shooting guard, small forward, power forward,
**              center.  Constructor intializes each of those data members.  Has get/set methods for
**              each position, and a method to return total points for all team members.
********************************************************************************************************/

#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp";
#include <string>

class Team {
	private:
		Player pointGuard;
		Player shootingGuard;
		Player smallForward;
		Player powerForward;
		Player center;
	public:
		Team(Player, Player, Player, Player, Player);
		void setPointGuard(Player);
		std::string getPointGuard();
		void setShootingGuard(Player);
		std::string getShootingGuard();
		void setSmallForward(Player);
		std::string getSmallForward();
		void setPowerForward(Player);
		std::string getPowerForward();
		void setCenter(Player);
		std::string getCenter();
		int totalPoints();
};
#endif