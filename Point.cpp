//
// Created by Tina on 2/1/2016.
//

#include <cmath>
#include "Point.h";

Point::Point()
//Default constructor, sets points to 0.0.
{
    x=0.0;
    y=0.0;
    z=0.0;
}

Point::Point(double initializesX, double initializesY, double initializesZ)
// three-argument constructor, initalize points.
{
    x=initializesX;
    y=initializesY;
    z=initializesZ;
}

// Mutator methods
void Point::setX(double newX)
{
    x= newX;
}
void Point::setY(double newY)
{
    y=newY;
}
void Point::setY(double newZ)
{
    z=newZ;
}


// Accessor methods
double Point::getX() const
{
    return x;
}
double Point::getY() const
{
    return y;
}
double Point::getZ() const
{
    return z;
}

//returns a double that approximates the distance between the three points
double distanceTo(const Point&) const
{
    return sqrt(pow(x - other.getX(), 2) + pow(y - other.getY(), 2) + pow(z - other.getZ(), 2));
}