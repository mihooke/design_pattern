#include "Subject.h"
#include "Observer.h"

Subject::Subject() {}
Subject::~Subject() {}
void Subject::RegisterObserver(Observer *o)
{
	if (o != nullptr)
	{
		m_list.push_back(o);
	}
}

void Subject::UnRegisterObserver(Observer *o)
{
	if (o != nullptr)
	{
		std::list<Observer*>::iterator itr = m_list.begin();
		for (; itr != m_list.end(); itr++)
		{
			if ((*itr) == o) return;
		}
		m_list.remove(o);
	}
}

void Subject::Notify()
{
	for (Observer *o : m_list)
	{
		o->UpdateState(this);
	}
}

SubSubject::SubSubject() {}
SubSubject::~SubSubject() {}
std::string SubSubject::GetState() const
{
	return m_str;
}
void SubSubject::SetState(const std::string &str)
{
	m_str = str;
}