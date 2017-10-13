#pragma once
class AbstractionImpl
{
public:
	AbstractionImpl();
	virtual ~AbstractionImpl() = 0;

	virtual void Operation() = 0;
};

class SubAbstractionImpl : public AbstractionImpl
{
public:
	SubAbstractionImpl();
	~SubAbstractionImpl();

	virtual void Operation();
};

