#include "product.h"
#include <iostream>

void Phone::InstallOS(std::string osName)
{
	m_osName = osName;
}

void Phone::InstallApp(std::string appName)
{
	m_appName = appName;
}

void Phone::Print()
{
	std::cout << m_osName << m_appName << std::endl;
}

Builder::Builder() {}
Builder::~Builder() {}

Phone *Builder::GetPhone() { return m_phone.release(); }

void Builder::CreateNewPhone()
{
	m_phone = std::make_unique<Phone>();
}

Factory1Builder::Factory1Builder() {}
Factory1Builder::~Factory1Builder() {}
void Factory1Builder::BuildPhoneOS()
{
	m_phone->InstallOS("MIUI");
}

void Factory1Builder::BuildPhoneApp()
{
	m_phone->InstallApp("QQ");
}

Factory2Builder::Factory2Builder() {}
Factory2Builder::~Factory2Builder() {}
void Factory2Builder::BuildPhoneOS()
{
	m_phone->InstallOS("Flyme");
}

void Factory2Builder::BuildPhoneApp()
{
	m_phone->InstallApp("wechat");
}

void Product::Print()
{
	m_builder->GetPhone()->Print();
}

void Product::MakePhone(std::shared_ptr<Builder> &builder)
{
	m_builder = builder;
	m_builder->CreateNewPhone();
	m_builder->BuildPhoneOS();
	m_builder->BuildPhoneApp();
}