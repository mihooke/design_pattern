#include "facade.h"

void ComponentOne::public_interface() {}

void ComponentTwo::public_interface() {}

Facade::Facade()
{
	one = new ComponentOne();
	two = new ComponentTwo();
}

void Facade::public_interface()
{
	one->public_interface();
	two->public_interface();
}