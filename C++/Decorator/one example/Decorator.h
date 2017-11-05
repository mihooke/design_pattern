#pragma once


class Component
{
public:
	Component();
	virtual ~Component();
	virtual void OldInterface();
};

// This class is already encapsulated£¬
// Assume the OldInterface() is provided by EXPORT DLL, that is to say, SubComponent is not modified
class SubComponent : public Component
{
public:
	SubComponent();
	~SubComponent();
	void OldInterface();
};

class Decorator : public Component
{
public:
	Decorator(Component *p);
	virtual ~Decorator();
	void OldInterface();

	// NewInterface() is the extendibale function
	void NewInterface();
private:
	Component *m_com;
};