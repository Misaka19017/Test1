#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual double Volume() const=0;
    virtual double show() const=0;
};

#endif // SHAPE_H