#include "shapefactory.h"

ShapeFactory::ShapeFactory() {}


std::map<std::string, ShapeFactory*> ShapeFactory::_factories;

