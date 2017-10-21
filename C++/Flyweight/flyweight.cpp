#include "flyweight.h"

Flyweight::Flyweight(std::string str) : m_state(str) {}
Flyweight::~Flyweight() {}
void Flyweight::Operation() {}
std::string Flyweight::GetState() { return m_state; }


SubFlyweight::SubFlyweight(std::string str) : Flyweight(str) {}
void SubFlyweight::Operation() {}