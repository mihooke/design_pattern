#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include <map>
#include <iostream>

class Shape;
class ShapeFactory
{
    virtual Shape *create() = 0;
public:
    ShapeFactory();
    ~ShapeFactory() {}

    static Shape *createShape(const std::string &id)
    {
        if (_factories.find(id) != _factories.end())
        {
            return _factories[id]->create();
        }
        return nullptr;
    }
    static std::map<std::string, ShapeFactory*> _factories;
};

#endif // SHAPEFACTORY_H
