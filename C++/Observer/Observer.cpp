#include "Observer.h"
#include "Subject.h"

Observer::Observer() {}
Observer::~Observer() {}

SubObserver::SubObserver(Subject *s)
{
	m_sub = s;
	m_sub->RegisterObserver(this);
}
SubObserver::~SubObserver()
{
	m_sub->UnRegisterObserver(this);
}
void SubObserver::UpdateState(Subject *s)
{
	m_str = s->GetState();
}
Subject *SubObserver::GetSubject()
{
	return m_sub;
}