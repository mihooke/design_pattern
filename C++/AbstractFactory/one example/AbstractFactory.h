#pragma once

class ProductA;
class ProductB;
class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();
	virtual ProductA *CreateProductA() = 0;
	virtual ProductB *CreateProductB() = 0;
};

// Here we will create ProductA and ProductB objects
// We need two factory functions to create themselves

// Sub1AbstractFactory is to create Sub1Product
class Sub1AbstractFactory : public AbstractFactory
{
public:
	Sub1AbstractFactory();
	~Sub1AbstractFactory();
	ProductA *CreateProductA();
	ProductB *CreateProductB();
};

// Sub2AbstractFactory is to create Sub2Product
class Sub2AbstractFactory : public AbstractFactory
{
public:
	Sub2AbstractFactory();
	~Sub2AbstractFactory();
	ProductA *CreateProductA();
	ProductB *CreateProductB();
};