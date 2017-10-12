#include "Builder.h"
#include "Director.h"
#include "Product.h"

/*
 * Builder Design Pattern had been used in situation which creating object step by step,
 * thus,it is not similar to Factory & Prototype.
 * In addition, Builder can detach class's realization and create design.
*/
int main()
{
	Director *d = new Director(new SubBuilder());
	d->CreatBuilder();
	return 0;
}