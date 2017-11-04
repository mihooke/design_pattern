#include "product.h"

int main()
{
	Product p;
	std::shared_ptr<Builder> b1(new Factory1Builder());
	p.MakePhone(b1);
	p.Print();
	return 0;
}