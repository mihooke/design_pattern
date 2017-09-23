#pragma once
class Product
{
public:
	Product();
	virtual ~Product();
};

class SubProduct : public Product
{
public:
	SubProduct();
	~SubProduct();
};