/********************************************************************************************************
** Author: Jacob Burton
** Date: 02/1/2019
** Description: Constructors for Team class.  Initializes Team with 5 data members of type Player,
**              order of parameter inputs determines position (pg, sg, sf, pf, c).  Methods to get/set
**              all 5 positions.  Method to get total points for all players on team.
********************************************************************************************************/

#include "Team.hpp"

/********************************************************************************************************
** Constructor that takes in 5 Players and assigns them to a position based on order of inputs.
********************************************************************************************************/
Team::Team(Player pgIn, Player sgIn, Player sfIn, Player pfIn, Player cIn) {
	setPointGuard(pgIn);
	setShootingGuard(sgIn);
	setSmallForward(sfIn);
	setPowerForward(pfIn);
	setCenter(cIn);
}

/********************************************************************************************************
** setPointGuard sets point guard position to parameter input.
********************************************************************************************************/
void Team::setPointGuard(Player pIn) {
	pointGuard = pIn;
}

/********************************************************************************************************
** getPointGuard returns the name of the player that is the point guard position on the team.
********************************************************************************************************/
Player Team::getPointGuard() {
	Player pg = pointGuard;
	return pg;
}

/********************************************************************************************************
** setShootingGuard sets shooting guard position to parameter input.
********************************************************************************************************/
void Team::setShootingGuard(Player pIn) {
	shootingGuard = pIn;
}

/********************************************************************************************************
** getShootingGuard returns the name of the player that is the shooting guard position on the team.
********************************************************************************************************/
Player Team::getShootingGuard() {
	Player sg = shootingGuard;
	return sg;
}

/********************************************************************************************************
** setSmallForward sets the small forward position to the parameter input.
********************************************************************************************************/
void Team::setSmallForward(Player pIn) {
	smallForward = pIn;
}

/********************************************************************************************************
** getSmallForward returns the name of the player that is the small forward position on the team.
********************************************************************************************************/
Player Team::getSmallForward() {
	Player sf = smallForward;
	return sf;
}

/********************************************************************************************************
** setPowerForward sets the power forward position to the parameter input.
********************************************************************************************************/
void Team::setPowerForward(Player pIn) {
	powerForward = pIn;
}

/********************************************************************************************************
** getPowerForward returns the name of the player that is the power forward position on the team.
********************************************************************************************************/
Player Team::getPowerForward() {
	Player pf = powerForward;
	return pf;
}

/********************************************************************************************************
** setCenter sets the center position to the parameter input.
********************************************************************************************************/
void Team::setCenter(Player pIn) {
	center = pIn;
}

/********************************************************************************************************
** getCenter returns the player that is the center position on the team.
********************************************************************************************************/
Player Team::getCenter() {
	Player c = center;
	return c;
}

/********************************************************************************************************
** totalPoints sums the points of each player on the team and returns that amount.
********************************************************************************************************/
int Team::totalPoints() {
	int tp = pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
	return tp;
}