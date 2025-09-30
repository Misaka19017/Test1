#ifndef CUBE_H
#define CUBE_H

#include "Cuboid.h"

class Cube : public Cuboid 
{
public:
   Cube(double side):Cuboid(side, side, side) {}
   double Volume() const override 
   {
       return Cuboid::Volume();
   }
   double show() const override {
       return Volume();
   }
};

#endif // CUBE_H