#pragma once
#include <memory>

class Phone
{
public:
	Phone();
	virtual ~Phone() = 0;
};

class Xiaomi : public Phone
{

};

class Meizu : public Phone
{

};

class Nubia : public Phone
{

};

class PhoneFactory
{
public:
	enum PhoneType {
		XIAOMI=1,
		MEIZU,
		NUBIA
	};
	static std::unique_ptr<Phone> MakePhone(PhoneType type);
};