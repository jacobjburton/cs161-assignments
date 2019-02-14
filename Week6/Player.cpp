/********************************************************************************************************
** Author: Jacob Burton
** Date: 02/11/2019
** Description: Constructors for Player class.  Default constructor initializes points, assist, rebounds 
**              to -100, and name to "".  Methods to set/get points, rebounds, assists.  Method to 
**              compare a specific player to another player and return true or false depending on
**              if the first player has more points, or less, than player being compared to.
*******************************************************************************************************/

#include "Player.hpp"
#include <string>

/********************************************************************************************************
** Default constructor that initializes name to "" and points, rebounds, assists to -100
********************************************************************************************************/
Player::Player() {
	name = "";
	points = -100;
	rebounds = -100;
	assists = -100;
}

/********************************************************************************************************
** Default constructor that initializes name to string parameter, and points, rebounds, assists, to 
** int parameters.
********************************************************************************************************/
Player::Player(std::string nameIn, int pointsIn, int reboundsIn, int assistsIn) {
	name = nameIn;
	points = pointsIn;
	rebounds = reboundsIn;
	assists = assistsIn;
}

/********************************************************************************************************
** getName method returns the name of the player.
********************************************************************************************************/
std::string Player::getName() {
	return name;
}

/********************************************************************************************************
** setPoints method takes an int parameter and updates the points attribute with the input value.
********************************************************************************************************/
void Player::setPoints(int pointsIn) {
	points = pointsIn;
}

/********************************************************************************************************
** getPoints method returns the number of points the player has scored.
********************************************************************************************************/
int Player::getPoints() {
	return points;
}

/********************************************************************************************************
** setRebounds method takes an int parameter and updates the points attribute with the input value.
********************************************************************************************************/
void Player::setRebounds(int reboundsIn) {
	rebounds = reboundsIn;
}

/********************************************************************************************************
** getRebounds method returns the number of rebounds a player has.
********************************************************************************************************/
int Player::getRebounds() {
	return rebounds;
}

/********************************************************************************************************
** setAssists method takes in an int parameter and updates the players assists total.
********************************************************************************************************/
void Player::setAssists(int assistsIn) {
	assists = assistsIn;
}

/********************************************************************************************************
** getAssists method returns the number of assists a player has.
********************************************************************************************************/
int Player::getAssists() {
	return assists;
}

/********************************************************************************************************
** hasMorePointsThan takes in a player parameter and compares points scored to it.  Returns true if
** player has more points than player parameter, false if not.
********************************************************************************************************/
bool Player::hasMorePointsThan(Player playerInput) {
	int otherPlayerPoints = playerInput.getPoints();
	return points > otherPlayerPoints;	
}