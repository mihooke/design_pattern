#include "template.h"

AbstractTemplate::AbstractTemplate() {}
AbstractTemplate::~AbstractTemplate() {}
void AbstractTemplate::GenericInterface()
{
	this->Operation1();
	this->Operation2();
}

void ConcreteTemplate1::Operation1() {}
void ConcreteTemplate1::Operation2() {}

void ConcreteTemplate2::Operation1() {}
void ConcreteTemplate2::Operation2() {}