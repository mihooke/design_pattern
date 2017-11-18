#include "State.h"

void State::ChangeState(Context *c, State *s)
{
	c->ChangeState(s);
}

void SubState1::OperateChangeState(Context *c)
{
	Interface(c);
	this->ChangeState(c, new SubState2());
}

void SubState2::OperateChangeState(Context *c)
{
	Interface(c);
	this->ChangeState(c, new SubState1());
}

//================================================
Context::Context(State *s) : m_s(s)
{
}

void Context::Interface() 
{
	m_s->Interface(this);
}

void Context::OperateChangeState()
{
	m_s->OperateChangeState(this);
}

void Context::ChangeState(State *s)
{
	m_s = s;
}