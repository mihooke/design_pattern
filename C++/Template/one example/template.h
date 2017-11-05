#pragma once

class AbstractTemplate
{
public:
	AbstractTemplate();
	virtual ~AbstractTemplate();
	void GenericInterface();
protected:
	virtual void Operation1() = 0;
	virtual void Operation2() = 0;
};

class ConcreteTemplate1 : public AbstractTemplate
{
public:
	void Operation1();
	void Operation2();
};

class ConcreteTemplate2 : public AbstractTemplate
{
public:
	void Operation1();
	void Operation2();
};