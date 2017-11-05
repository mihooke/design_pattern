#include "decorator.h"
using namespace std;

int main()
{
	unique_ptr<Interface> core = make_unique<Core>();
	shared_ptr<Interface> sc1 = make_shared<ConcreteDecorator1>(make_unique<Core>());
	shared_ptr<Interface> sc2 = make_shared<ConcreteDecorator2>(make_unique<Core>());
	sc1->Operation();
	sc2->Operation();

	return 0;
}