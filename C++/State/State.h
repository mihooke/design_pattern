#pragma once

class Context;
class State
{
public:
	State() {}
	virtual void Interface(Context *c) = 0;
	virtual void OperateChangeState(Context *c) = 0;
protected:
	void ChangeState(Context *c, State *s);
};

class SubState1 : public State
{
public:
	SubState1() {}
	~SubState1() {}
	void Interface(Context *c) {}
	void OperateChangeState(Context *c);
};

class SubState2 : public State
{
public:
	SubState2() {}
	~SubState2() {}
	void Interface(Context *c) {}
	void OperateChangeState(Context *c);
};

//================================================
class Context
{
public:
	Context(State *s);
	~Context() {}
	void Interface();
	void OperateChangeState();
private:
	friend class State;
	void ChangeState(State *s);
	State *m_s;
};