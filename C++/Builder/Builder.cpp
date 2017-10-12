#include "Builder.h"
#include "Product.h"
#include <iostream>

Builder::Builder()
{
}

Builder::~Builder()
{
}

SubBuilder::SubBuilder()
{

}

SubBuilder::~SubBuilder()
{

}

void SubBuilder::BuilderFunc1(const std::string &str)
{
	std::cout << str << std::endl;
}
void SubBuilder::BuilderFunc2(const std::string &str)
{
	std::cout << str << std::endl;
}
void SubBuilder::BuilderFunc3(const std::string &str)
{
	std::cout << str << std::endl;
}
Product *SubBuilder::GetProduct()
{
	BuilderFunc1("inner1");
	BuilderFunc2("inner2");
	BuilderFunc3("inner3");
	return new Product;
}
