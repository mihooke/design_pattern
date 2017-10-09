#include "singleton.h"
#include <iostream>
using namespace std;

void func(Singleton &s)
{
	return;
}

int main()
{
	//Singleton *ps = Singleton::Instance();
	func(Singleton::Instance2());
	return 0;
}