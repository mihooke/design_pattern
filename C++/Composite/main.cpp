#include "Component.h"

/*
 * Composite pattern is similar to Decorator,but Composite has a bias towards including a list of objects
 * invoke them from outside
*/
int main()
{
	SubComponent *s = new SubComponent();
	Composite *p = new Composite();
	p->Operation();

	p->AddElement(s);
	Component *c = p->GetElement(0);
	c->Operation();
	return 0;
}