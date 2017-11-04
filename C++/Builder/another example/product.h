#pragma once
#include <string>
#include <memory>

class Phone
{
public:
	void Print();
	void InstallOS(std::string osName);
	void InstallApp(std::string appName);
private:
	std::string m_osName;
	std::string m_appName;
};

class Builder
{
public:
	Builder();
	virtual ~Builder() = 0;
	Phone *GetPhone();
	void CreateNewPhone();
	virtual void BuildPhoneOS() = 0;
	virtual void BuildPhoneApp() = 0;
protected:
	std::unique_ptr<Phone> m_phone;
};

class Factory1Builder : public Builder
{
public:
	Factory1Builder();
	~Factory1Builder();
	void BuildPhoneOS();
	void BuildPhoneApp();
};

class Factory2Builder : public Builder
{
public:
	Factory2Builder();
	~Factory2Builder();
	void BuildPhoneOS();
	void BuildPhoneApp();
};

class Product
{
public:
	void Print();
	void MakePhone(std::shared_ptr<Builder> &builder);
private:
	std::shared_ptr<Builder> m_builder;
};