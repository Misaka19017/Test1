#ifndef CUBOID_H
#define CUBOID_H

#include "Shape.h"

class Cuboid : public Shape {
private:
    double length;
    double width;
    double height;
public:
    Cuboid(double l, double w, double h) : length(l), width(w), height(h) {}
    double Volume () const override 
    {
        return length * width * height;
    }
    double show() const override {
        return Volume();
    }
};

#endif // CUBOID_H