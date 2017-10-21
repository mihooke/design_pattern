#pragma once
#include <vector>
#include <iostream>

class Component
{
public:
	Component();
	virtual ~Component();
	virtual void Operation();
	virtual void AddElement(Component *p);
	virtual void RemoveElement(Component *p);
	virtual Component *GetElement(int index);
};

class Composite : public Component
{
public:
	Composite();
	~Composite();
	void Operation();
	void AddElement(Component *p);
	void RemoveElement(Component *p);
	Component *GetElement(int index);

private:
	std::vector<Component *> m_vec;
};

class SubComponent : public Component
{
public:
	void Operation();
};