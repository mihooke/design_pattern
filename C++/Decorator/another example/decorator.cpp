#include <iostream>
#include "decorator.h"
using namespace std;

Interface::~Interface() {}

Core::~Core() {}
void Core::Operation() { cout << "Core::Operation()" << endl; }

Decorator::Decorator(unique_ptr<Interface> inter) : m_inter(move(inter))
{

}
void Decorator::Operation()
{
	m_inter->Operation();
	cout << "Decorator::Operation()" << endl;
}

ConcreteDecorator1::ConcreteDecorator1(unique_ptr<Interface> inter)
	: Decorator(move(inter))
{

}
void ConcreteDecorator1::Operation()
{
	Decorator::Operation();
	cout << "ConcreteDecorator1::Operation()" << endl;
}

ConcreteDecorator2::ConcreteDecorator2(unique_ptr<Interface> inter)
	: Decorator(move(inter))
{

}
void ConcreteDecorator2::Operation()
{
	Decorator::Operation();
	cout << "ConcreteDecorator2::Operation()" << endl;
}