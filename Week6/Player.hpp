/********************************************************************************************************
** Author: Jacob Burton
** Date: 02/11/2019
** Description: Class specification file for Player class.  Declares the Player class that has a string
**              for player name, and 3 ints for points, rebounds, and assists.  Has methods for creating
**              a default player, and a method for creating a player with the 4 parameter inputs.  Also
**              has methods for setting and getting each player attribute, as well as for comparing a 
**              player's points to other players. 
*******************************************************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

/*Define the interface of the Player class*/
class Player {
    private:
        std::string name;
        int points;
        int rebounds;
        int assists;
    public:
        Player();
        Player(std::string, int, int, int);
        std::string getName();
        void setPoints(int);
        int getPoints();
        void setRebounds(int);
        int getRebounds();
        void setAssists(int);
        int getAssists();
        bool hasMorePointsThan(Player);
};
#endif