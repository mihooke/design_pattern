#pragma once
#include <memory>

class Interface
{
public:
	virtual ~Interface();
	virtual void Operation() = 0;
};

class Core : public Interface
{
public:
	~Core();
	virtual void Operation() override;
};

class Decorator : public Interface
{
public:
	Decorator(std::unique_ptr<Interface> inter);
	virtual void Operation() override;
private:
	std::unique_ptr<Interface> m_inter;
};

class ConcreteDecorator1 : public Decorator
{
public:
	ConcreteDecorator1(std::unique_ptr<Interface> i);
	virtual void Operation() override;
};

class ConcreteDecorator2 : public Decorator
{
public:
	ConcreteDecorator2(std::unique_ptr<Interface> i);
	virtual void Operation() override;
};