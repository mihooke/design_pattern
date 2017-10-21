#pragma once
#include <string>

class Flyweight
{
public:
	Flyweight(std::string str);
	virtual ~Flyweight();
public:
	virtual void Operation();
	std::string GetState();
private:
	std::string m_state;
};

class SubFlyweight : public Flyweight
{
public:
	SubFlyweight(std::string str);
	void Operation();
};