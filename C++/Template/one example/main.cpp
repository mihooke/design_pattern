#include "template.h"

int main()
{
	AbstractTemplate *at1 = new ConcreteTemplate1();
	at1->GenericInterface();

	AbstractTemplate *at2 = new ConcreteTemplate2();
	at2->GenericInterface();
	return 0;
}