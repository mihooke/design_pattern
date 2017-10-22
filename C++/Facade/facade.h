#pragma once
class ComponentOne
{
public:
	void public_interface();
};

class ComponentTwo
{
public:
	void public_interface();
};

class Facade
{
public:
	Facade();
	void public_interface();
private:
	ComponentOne *one;
	ComponentTwo *two;
};