/********************************************************************************************************
** Author: Jacob Burton
** Date: 02/05/2019
** Description: Class specification file for Taxicab class.  Declares the Taxicab class that has 3 int
**              fields.  x stores movement in the x direction.  x stores movement in the y direction.
**              totalDistance store the total distance traveled by movements.
*******************************************************************************************************/

#ifndef TAXICAB_HPP
#define TAXICAB_HPP

/*Define the interface of the Taxicab Class*/
class Taxicab {
    private:
        int x,
            y,
            distanceTraveled;
    public:
        Taxicab();
        Taxicab(int, int);
    int getXCoord();
    int getYCoord();
    int getDistanceTraveled();
    void moveX(int);
    void moveY(int);
};
#endif