#include "AbstractFactory.h"
#include "Product.h"

AbstractFactory::AbstractFactory() {}
AbstractFactory::~AbstractFactory() {}

Sub1AbstractFactory::Sub1AbstractFactory() {}
Sub1AbstractFactory::~Sub1AbstractFactory() {}
ProductA *Sub1AbstractFactory::CreateProductA()
{
	return new Sub1ProductA();
}
ProductB *Sub1AbstractFactory::CreateProductB()
{
	return new Sub1ProductB();
}

Sub2AbstractFactory::Sub2AbstractFactory() {}
Sub2AbstractFactory::~Sub2AbstractFactory() {}
ProductA *Sub2AbstractFactory::CreateProductA()
{
	return new Sub2ProductA();
}
ProductB *Sub2AbstractFactory::CreateProductB()
{
	return new Sub2ProductB();
}