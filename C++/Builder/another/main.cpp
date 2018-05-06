#include <iostream>
#include "bicyclebuilder.h"

using namespace std;

Bicycle *buildMyBicycle(BicycleTechnician &tech, BicycleBuilder *builder)
{
    tech.setBuilder(builder);
    tech.constructBike();
    cout << "build a bike:" << builder->getName() << endl;
    return builder->getBicycle();
}

int main(int argc, char *argv[])
{
    vector<Bicycle*> bikes;
    BicycleBuilder *bm = new MountainBicycleBuilder;
    BicycleBuilder *bt = new TouringBicycleBuilder;
    BicycleBuilder *br = new RacingBicycleBuilder;
    BicycleTechnician tech;

    for (int i = 0; i < 3; i++)
    {
        bikes.push_back(buildMyBicycle(tech, bm));
        bikes.push_back(buildMyBicycle(tech, bt));
        bikes.push_back(buildMyBicycle(tech, br));
    }
    return 0;
}
