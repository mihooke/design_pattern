#ifndef SHAPE_H
#define SHAPE_H

#include "shapefactory.h"

class Shape
{
public:
    Shape();
    virtual ~Shape() {}
    virtual void draw() = 0;
    virtual void erase() = 0;
};

class Circle : public Shape
{
public:
    void draw() { std::cout << "circle draw" << std::endl; }
    void erase() { std::cout << "circle erase" << std::endl; }
    friend class InitFactory;
private:
    class Factory : public ShapeFactory
    {
    public:
        Shape *create() {return new Circle;}
    };
};

class Square : public Shape
{
public:
    void draw() { std::cout << "Square draw" << std::endl; }
    void erase() { std::cout << "Square erase" << std::endl; }
    friend class InitFactory;
private:
    class Factory : public ShapeFactory
    {
    public:
        Shape *create() {return new Square;}
    };
};

class InitFactory
{
public:
    static InitFactory f;
    InitFactory()
    {
        ShapeFactory::_factories["Circle"] = new Circle::Factory;
        ShapeFactory::_factories["Square"] = new Square::Factory;
    }
};

#endif // SHAPE_H
