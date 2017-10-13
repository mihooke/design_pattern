#include "Abstraction.h"
#include "AbstractionImpl.h"

Abstraction::Abstraction()
{
}

Abstraction::~Abstraction()
{
}

SubAbstraction::SubAbstraction(AbstractionImpl *pai) : m_pai(pai)
{}

SubAbstraction::~SubAbstraction() {}

void SubAbstraction::Operation()
{
	m_pai->Operation();
}