#pragma once
class ProductA
{
public:
	ProductA();
	virtual ~ProductA();
};

class ProductB
{
public:
	ProductB();
	virtual ~ProductB();
};

// ProductA and ProductB have a list of derived class

class Sub1ProductA : public ProductA
{
public:
	Sub1ProductA();
	~Sub1ProductA();
};

class Sub2ProductA : public ProductA
{
public:
	Sub2ProductA();
	~Sub2ProductA();
};

class Sub1ProductB : public ProductB
{
public:
	Sub1ProductB();
	~Sub1ProductB();
};

class Sub2ProductB : public ProductB
{
public:
	Sub2ProductB();
	~Sub2ProductB();
};