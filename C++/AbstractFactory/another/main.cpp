#include <iostream>
#include "factory.h"
#include "product.h"

using namespace std;

int main(int argc, char *argv[])
{
    Factory *f1 = new CheapPropertyComputerFactory;
    f1->makeProduct()->operation(f1->makeProperty());

    Factory *f2 = new ExpPropertyPhoneFactory;
    f2->makeProduct()->operation(f2->makeProperty());
    return 0;
}
