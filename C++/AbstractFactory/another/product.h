#ifndef PRODUCT_H
#define PRODUCT_H

class Property
{
public:
    virtual void price() = 0;
};

class CheapProperty : public Property
{
public:
    virtual void price() override {}
};

class ExpensiveProperty : public Property
{
public:
    virtual void price() override {}
};
//////////////////////////////////////////////////////////////
class Product
{
public:
    virtual void operation(Property *p) = 0;
};

class Computer : public Product
{
public:
    virtual void operation(Property *p) override
    {
        p->price();
    }
};

class Phone : public Product
{
public:
    virtual void operation(Property *p) override
    {
        p->price();
    }
};

#endif // PRODUCT_H
