#ifndef BALL_H
#define BALL_H

#include "Shape.h"
#include <cmath>
class Ball : public Shape
{
private:
    double radius;
public:
    Ball(double r): radius(r) {};
    double Volume() const override
    {
        return (4.0/3.0) * M_PI * std::pow(radius, 3);

    }
   double show() const override
   {
         return Volume();
   }
};

#endif // BALL_H