#include "Product.h"
#include "AbstractFactory.h"

int main()
{
	AbstractFactory *f1 = new Sub1AbstractFactory();
	ProductA *pa1 = f1->CreateProductA();
	ProductB *pb1 = f1->CreateProductB();

	AbstractFactory *f2 = new Sub2AbstractFactory();
	ProductA *pa2 = f2->CreateProductA();
	ProductB *pb2 = f2->CreateProductB();
	return 0;
}