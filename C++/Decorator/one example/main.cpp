/*
 * The core of this pattern is providing extendibilities to client for users who 
 * use the encapsluted functions, for example, the interfaces in EXPORT DLLs.
 * If you want to add a new function to a DLL, but you don't want to destory the encasluted class...
 *
 * So you could use decorator, either a class or lots of classes(in our living 
 * example code is SubComponent class), you just create only one decorator class(in our living 
 * example code is Decorator class), then add the new functions to here.
*/

#include "Decorator.h"

int main()
{
	Component *p = new SubComponent();
	Decorator *d = new Decorator(p);
	// Here you can keep invoking OldInterface()
	d->OldInterface();
	return 0;
}