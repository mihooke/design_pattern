#include "factory.h"

Phone::Phone() {}
Phone::~Phone() {}

std::unique_ptr<Phone> PhoneFactory::MakePhone(PhoneFactory::PhoneType type)
{
	switch (type)
	{
	case PhoneFactory::XIAOMI:
		return std::make_unique<Xiaomi>();
		break;
	case PhoneFactory::MEIZU:
		return std::make_unique<Meizu>();
		break;
	case PhoneFactory::NUBIA:
		return std::make_unique<Nubia>();
		break;
	default:
		return nullptr;
		break;
	}
}