#include "Strategy.h"

InvokeStrategy::~InvokeStrategy()
{
	if (m_s != nullptr)
	{
		delete m_s;
		m_s = nullptr;
	}
}
void InvokeStrategy::Invoke()
{
	m_s->Operation();
}