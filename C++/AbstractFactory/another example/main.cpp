#include "factory.h"
using namespace std;

int main()
{
	unique_ptr<Phone> xiaomi = PhoneFactory::MakePhone(PhoneFactory::XIAOMI);
	unique_ptr<Phone> meizu = PhoneFactory::MakePhone(PhoneFactory::MEIZU);
	unique_ptr<Phone> nubia = PhoneFactory::MakePhone(PhoneFactory::NUBIA);
	return 0;
}