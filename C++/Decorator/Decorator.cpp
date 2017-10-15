#include "Decorator.h"

Component::Component() {}
Component::~Component() {}
void Component::OldInterface() {}

SubComponent::SubComponent() {}
SubComponent::~SubComponent() {}
void SubComponent::OldInterface() {}

Decorator::Decorator(Component *p) : m_com(p) {}
Decorator::~Decorator() {}
void Decorator::OldInterface() 
{
	m_com->OldInterface();
	this->NewInterface();
}
void Decorator::NewInterface() {}