#pragma once
#include <string>

class Product;
class Builder
{
public:
	Builder();
	virtual ~Builder() = 0;
	virtual void BuilderFunc1(const std::string &str) = 0;
	virtual void BuilderFunc2(const std::string &str) = 0;
	virtual void BuilderFunc3(const std::string &str) = 0;
	virtual Product *GetProduct() = 0;
};

class SubBuilder : public Builder
{
public:
	SubBuilder();
	~SubBuilder();
	void BuilderFunc1(const std::string &str);
	void BuilderFunc2(const std::string &str);
	void BuilderFunc3(const std::string &str);
	Product *GetProduct();
};

