/********************************************************************************************************
** Author: Jacob Burton
** Date: 02/05/2019
** Description: Class specification file for Box class.  Declares the Box class, that has doubles
**              height, width, and length.  Also includes methods for calculating volume and
**              surface area for the box.              
*******************************************************************************************************/

#ifndef BOX_HPP
#define BOX_HPP

/*Defines the interface of the Box Class */
class Box {
    private:
        double height,
            width,
            length,
            volume,
            surfaceArea;
    public:
        Box();
        Box(double, double, double);
        void setHeight(double);
        void setWidth(double);
        void setLength(double);  
        double calcVolume();
        double calcSurfaceArea();
};
#endif