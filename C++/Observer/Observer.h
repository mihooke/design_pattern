#pragma once
#include <string>

class Subject;
class Observer
{
public:
	Observer();
	virtual ~Observer();
	virtual void UpdateState(Subject *s) = 0;
protected:
	std::string m_str;
};

class SubObserver : public Observer
{
public:
	explicit SubObserver(Subject *s);
	~SubObserver();
	void UpdateState(Subject *s);
	Subject *GetSubject();
private:
	Subject *m_sub;
};

