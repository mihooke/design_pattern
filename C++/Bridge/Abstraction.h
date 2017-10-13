#pragma once
class Abstraction
{
public:
	Abstraction();
	virtual ~Abstraction() = 0;

	virtual void Operation() = 0;
};

class AbstractionImpl;
class SubAbstraction : public Abstraction
{
public:
	SubAbstraction(AbstractionImpl *pai);
	~SubAbstraction();

	virtual void Operation();
private:
	AbstractionImpl *m_pai = nullptr;
};

