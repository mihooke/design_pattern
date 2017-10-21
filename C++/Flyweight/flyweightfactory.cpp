#include "flyweightfactory.h"
#include "flyweight.h"

Flyweight *FlyweightFactory::GetFlyweight(const std::string state)
{
	std::vector<Flyweight *>::iterator itr = m_vec.begin();
	for (; itr != m_vec.end(); itr++)
	{
		if ((*itr)->GetState() == state)
		{
			return *itr;
		}
	}
	Flyweight *f = new SubFlyweight(state);
	m_vec.push_back(f);
	return f;
}