#include "Cube.h"
#include "Ball.h"
#include <iostream>
using namespace std;
int main()
{
    Shape* shapes[2];
    shapes[0] = new Cube(3.0);
    shapes[1] = new Ball(2.0);

    for (int i = 0; i < 2; ++i)
    {
        cout << "Volume of shape " << i + 1 << ": " << shapes[i]->show() << endl;
        delete shapes[i]; // Clean up memory
    }

    return 0;
}