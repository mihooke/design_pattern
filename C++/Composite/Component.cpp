#include "Component.h"
using namespace std;

Component::Component() {}
Component::~Component() {}
void Component::Operation() {}
void Component::AddElement(Component *p) {}
void Component::RemoveElement(Component *p) {}
Component *Component::GetElement(int index) { return nullptr; }

Composite::Composite() {}
Composite::~Composite() {}
void Composite::Operation()
{
	vector<Component *>::iterator itr = m_vec.begin();
	for (; itr != m_vec.end(); itr++)
	{
		(*itr)->Operation();
	}
}
void Composite::AddElement(Component *p)
{
	m_vec.push_back(p);
}
void Composite::RemoveElement(Component *p)
{
	vector<Component *>::iterator itr = m_vec.begin();
	for (; itr != m_vec.end(); itr++)
	{
		if (p == *itr)
			itr = m_vec.erase(itr);
	}
}
Component *Composite::GetElement(int index)
{
	return m_vec[index];
}

void SubComponent::Operation()
{}