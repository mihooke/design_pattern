#pragma once
#include <string>
#include <list>

class Observer;
class Subject
{
public:
	Subject();
	virtual ~Subject();
	virtual void RegisterObserver(Observer *o);
	virtual void UnRegisterObserver(Observer *o);
	virtual void Notify();
	virtual void SetState(const std::string &str) = 0;
	virtual std::string GetState() const = 0;

private:
	std::list<Observer*> m_list;
};

class SubSubject : public Subject
{
public :
	SubSubject();
	~SubSubject();
	void SetState(const std::string &str);
	std::string GetState() const;

private:
	std::string m_str;
};