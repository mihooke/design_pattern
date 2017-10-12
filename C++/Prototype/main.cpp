#include "Prototype.h"

/*
 * Prototype Design Pattern creates object via copying itself. It also could understand by
 * creating new class via copying itself.

 * As to copy, having deep copy(memory copy) and shadow copy(pointer copy).
 * Here, we use deep copy.
*/
int main()
{
	Prototype *p1 = new SubPrototype();
	Prototype *p2 = p1->clone();
	return 0;
}