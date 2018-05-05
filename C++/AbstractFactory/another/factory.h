#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

class Factory
{
public:
    virtual Product *makeProduct() = 0;
    virtual Property *makeProperty() = 0;
};

class CheapPropertyComputerFactory : public Factory
{
public:
    virtual Product *makeProduct() override {return new Computer;}
    virtual Property *makeProperty() override {return new CheapProperty;}
};

class ExpPropertyPhoneFactory : public Factory
{
public:
    virtual Product *makeProduct() override {return new Phone;}
    virtual Property *makeProperty() override {return new ExpensiveProperty;}
};

#endif // FACTORY_H
