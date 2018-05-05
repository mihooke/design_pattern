#include <iostream>
#include <vector>
#include "shape.h"

using namespace std;

int main(int argc, char *argv[])
{

    vector<string> shapes{"Circle", "Circle", "Square", "Square"};
    vector<Shape*> shape;
    for (const string &s : shapes)
    {
        shape.push_back(ShapeFactory::createShape(s));
    }

    for (Shape *s : shape)
    {
        s->draw();
    }
    return 0;
}
