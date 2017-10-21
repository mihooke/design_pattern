#pragma once
#include <string>
#include <vector>
class Flyweight;
class FlyweightFactory
{
public:
	Flyweight *GetFlyweight(const std::string state);
private:
	std::vector<Flyweight *> m_vec;
};