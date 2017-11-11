#pragma once
#include <iostream>
#include <string>
#include <list>

class MediatorInterface;
class PhoneInterface
{
public:
	PhoneInterface(std::string name) : m_name(name) {}
	std::string GetName() const { return m_name; }
	virtual void SendMessage(const MediatorInterface &m, const std::string &name) const = 0;
	virtual void RecvMessage(const PhoneInterface *r, const std::string &name) const = 0;
private:
	std::string m_name;
};

class Phone : public PhoneInterface
{
public:
	Phone(std::string name) : PhoneInterface(name) {}
	void SendMessage(const MediatorInterface &m, const std::string &name) const override;
	void RecvMessage(const PhoneInterface *r, const std::string &name) const override;
};


class MediatorInterface
{
public:
	typedef std::list<PhoneInterface*> phoneList;
	const phoneList &GetPhoneList() const { return m_phoneList; }
	virtual void DistributeMessage(const PhoneInterface *r, const std::string &name) const = 0;
	virtual void Register(PhoneInterface *r) = 0;
protected:
	phoneList m_phoneList;
};

class Mediator : public MediatorInterface
{
public:
	void DistributeMessage(const PhoneInterface *r, const std::string &name) const override;
	void Register(PhoneInterface *r) override;
};