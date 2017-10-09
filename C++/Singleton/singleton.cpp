#include "singleton.h"

Singleton *Singleton::_instance = nullptr;

Singleton::Singleton() { }

// Can write in this way
Singleton *Singleton::Instance()
{
	if (_instance == nullptr)
		_instance = new Singleton();
	return _instance;
}

// Also can in this way
Singleton Singleton::Instance2()
{
	static Singleton s;
	return s;
}
