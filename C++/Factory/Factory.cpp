#include "Factory.h"
#include "Product.h"


Factory::Factory()
{
}


Factory::~Factory()
{
}

SubFactory::SubFactory()
{

}
SubFactory::~SubFactory()
{

}
Product *SubFactory::CreateProduct()
{
	return new SubProduct();
}