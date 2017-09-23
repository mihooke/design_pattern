#include "Factory.h"
#include "Product.h"
#include <iostream>
using namespace std;

/*
 * Factory pattern has two profits:
 * 1. Encapsulate "Product" class interfaces
 * 2. Postpone instantiation to sub-class, for example, "SubFactory"
*/

int main()
{
	Factory *f = new SubFactory();
	Product *p = f->CreateProduct();
	return 0;
}