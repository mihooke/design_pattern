#include "Prototype.h"

Prototype::Prototype()
{
}

Prototype::~Prototype()
{
}

Prototype *Prototype::clone() { return nullptr; }

SubPrototype::SubPrototype() {}

SubPrototype::~SubPrototype() {}

SubPrototype::SubPrototype(const SubPrototype &)
{

}

Prototype *SubPrototype::clone()
{
	return new SubPrototype(*this);
}