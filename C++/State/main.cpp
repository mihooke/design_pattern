#include "State.h"

/*
 * The State Pattern allows an object to alter its behavior when its internal state changes.
 * The object will appear as having changed its class.
 * Here we have two state object,and if we use Context object to change State's state,just only
 * invoke OperateChangeState().
 */
int main()
{
	State *s1 = new SubState1();
	State *s2 = new SubState2();

	Context *c = new Context(s1);
	c->OperateChangeState();
	c->OperateChangeState();
	return 0;
}