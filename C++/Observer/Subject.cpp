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
		for (auto observer : m_list)
		{
			if (observer == o)
				m_list.remove(observer);
		}
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