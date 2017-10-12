#pragma once
class Prototype
{
public:
	Prototype();
	~Prototype();
	virtual Prototype *clone();
};

class SubPrototype : public Prototype
{
public:
	SubPrototype();
	~SubPrototype();
	SubPrototype(const SubPrototype &);
	Prototype *clone();
};