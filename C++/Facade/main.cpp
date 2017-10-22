#include "facade.h"

/*
 * Facade pattern is a encapsulation of dispersive public interfaces in a list of class in fact.
 * In many cases,the public interfaces is dispersive in multi-class i.e. 
 * ComponentOne/ComponentTwo... maybe they have different function name, but they may will be
 * invoked at the same time,therefore we need a class to provide them i.e. Facade
*/
int main()
{
	Facade f;
	f.public_interface();
	return 0;
}