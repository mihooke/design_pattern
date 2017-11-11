#include "mediator.h"

void Phone::SendMessage(const MediatorInterface &m, const std::string &name) const
{
	m.DistributeMessage(this, name);
}
void Phone::RecvMessage(const PhoneInterface *r, const std::string &name) const
{
	std::cout << GetName() << " recv " << name << "  from " << r->GetName() << std::endl;
}

void Mediator::DistributeMessage(const PhoneInterface *r, const std::string &name) const
{
	for (const PhoneInterface *p : m_phoneList)
	{
		if (p != r)
		{
			p->RecvMessage(r, name);
		}
	}
}
void Mediator::Register(PhoneInterface *r)
{
	m_phoneList.emplace_back(r);
}