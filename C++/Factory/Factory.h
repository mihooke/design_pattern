#pragma once

class Product;
class Factory
{
public:
	Factory();
	virtual ~Factory();
	virtual Product *CreateProduct() = 0;
};

class SubFactory : public Factory
{
public:
	SubFactory();
	~SubFactory();
	Product *CreateProduct();
};