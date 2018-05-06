#ifndef BICYCLEBUILDER_H
#define BICYCLEBUILDER_H
#include <iostream>
#include <vector>
#include <string>

class BicyclePart
{
public:
    enum PART : unsigned char
    {
        WHEEL,
        SEAT,
        HANDLEBAR,
        RACK,
        PARTSNUM
    };
private:
    PART _id;
    static std::string names[PARTSNUM];
public:
    BicyclePart(PART p) {_id = p;}
    friend std::ostream &operator <<(std::ostream os, const BicyclePart &bp)
    {
        return os << bp.names[bp._id];
    }
};

class Bicycle
{
public:
    ~Bicycle() {_parts.clear();}
    void addPart(BicyclePart *p) {_parts.push_back(p);}
    friend std::ostream &operator<<(std::ostream &os, const Bicycle &b)
    {
        os << "{ ";
        for (BicyclePart *p : b._parts)
        {
            os << p << " ";
        }
        return os << " }";
    }

private:
    std::vector<BicyclePart*> _parts;
};
/////////////////////////////////////////////////////////////////////////
class BicycleBuilder
{
public:
    void createBicycle() {_bicycle = new Bicycle;}
    virtual void buildWheel() = 0;
    virtual void buildSeat() = 0;
    virtual void buildHandleBar() = 0;
    virtual void buildrack() = 0;
    virtual std::string getName() const = 0;
    Bicycle *getBicycle() {return _bicycle;}
protected:
    Bicycle *_bicycle = nullptr;
};

class MountainBicycleBuilder : public BicycleBuilder
{
public:
    virtual void buildWheel();
    virtual void buildSeat();
    virtual void buildHandleBar();
    virtual void buildrack();
    virtual std::string getName() const {return "MountainBike";}
};

class TouringBicycleBuilder : public BicycleBuilder
{
public:
    virtual void buildWheel();
    virtual void buildSeat();
    virtual void buildHandleBar();
    virtual void buildrack();
    virtual std::string getName() const {return "TouringBike";}
};

class RacingBicycleBuilder : public BicycleBuilder
{
public:
    virtual void buildWheel();
    virtual void buildSeat();
    virtual void buildHandleBar();
    virtual void buildrack();
    virtual std::string getName() const {return "RacingBike";}
};

///////////////////////////////////////////////////////////////
class BicycleTechnician
{
public:
    void setBuilder(BicycleBuilder *b) {_builder = b;}
    void constructBike();
private:
    BicycleBuilder *_builder = nullptr;
};

#endif // BICYCLEBUILDER_H
