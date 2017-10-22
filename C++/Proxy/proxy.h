#pragma once
class Project
{
public:
	void Operation();
};

class Proxy
{
public:
	Proxy(Project *j);
	void Operation();
private:
	Project *m_j;
};