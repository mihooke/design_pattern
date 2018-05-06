#include "bicyclebuilder.h"

using namespace std;

string BicyclePart::names[BicyclePart::PARTSNUM] = {
    "Wheel", "Seat", "HandleBar", "Rack"
};

void MountainBicycleBuilder::buildWheel()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::WHEEL));
}
void MountainBicycleBuilder::buildSeat()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::SEAT));
}
void MountainBicycleBuilder::buildHandleBar()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::HANDLEBAR));
}
void MountainBicycleBuilder::buildrack()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::RACK));
}

void TouringBicycleBuilder::buildWheel()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::WHEEL));
}
void TouringBicycleBuilder::buildSeat()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::SEAT));
}
void TouringBicycleBuilder::buildHandleBar()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::HANDLEBAR));
}
void TouringBicycleBuilder::buildrack()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::RACK));
}

void RacingBicycleBuilder::buildWheel()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::WHEEL));
}
void RacingBicycleBuilder::buildSeat()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::SEAT));
}
void RacingBicycleBuilder::buildHandleBar()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::HANDLEBAR));
}
void RacingBicycleBuilder::buildrack()
{
    _bicycle->addPart(new BicyclePart(BicyclePart::RACK));
}
/////////////////////////////////////////////////////////////////////
void BicycleTechnician::constructBike()
{
    _builder->createBicycle();
    _builder->buildWheel();
    _builder->buildSeat();
    _builder->buildHandleBar();
    _builder->buildrack();
}
