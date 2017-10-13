#include "Abstraction.h"
#include "AbstractionImpl.h"

/*
 * Bridge Design Pattern mainly use composition to detach a abstract class and its opsration
*/
int main()
{
	AbstractionImpl *pi = new SubAbstractionImpl();
	Abstraction *pa = new SubAbstraction(pi);
	return 0;
}