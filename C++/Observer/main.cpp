#include "Observer.h"
#include "Subject.h"

int main()
{
	SubSubject *s = new SubSubject();
	Observer *o = new SubObserver(s);
	s->SetState("old");
	s->Notify();

	s->SetState("new");
	s->Notify();
	return 0;
}