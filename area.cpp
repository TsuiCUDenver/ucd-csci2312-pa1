//
// Created by Tina on 2/5/2016.
//
#include <iostream>
#include <iomanip> // for setprecision/fixed
#include <cmath> // For sqrt function
#include"Point.h"

using namespace std;

double computeArea(const Point &a, const Point &b, const Point &c) //A = \sqrt{s(s-a)(s-b)(s-c)},
{
    double semiperimeter;
    double hypotenuse;
    double opposite;
    double adjacent;

    cout << setprecision(2) << fixed; //2 decimal formatted output

    //Calcuate hypotenuse side of triangle
    hypotenuse  = c.distanceTo(a);

    //Calcuate opposite side of triangle
    opposite = a.distanceTo(b);

    //Calculate adjacent side of triangle
    adjacent = b.distanceTo(c);

    //Calculate semiperimeter
    semiperimeter = (hypotenuse + opposite + adjacent)/2; // Calculate semiperimeter  of triangle

    //Calcuate area with Heron's Formula.
    return sqrt(semiperimeter * (semiperimeter - hypotenuse) * (semiperimeter - opposite) * (semiperimeter - adjacent));
}