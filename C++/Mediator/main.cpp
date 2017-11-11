#include "mediator.h"
/*
 * Define an object that encapsulates how a set of objects interact. 
 * Mediator promotes loose coupling by keeping objects from referring 
 * to each other explicitly, and it lets you vary their interaction independently.
*/
int main()
{
	PhoneInterface *xiaomi = new Phone("xiaomi");
	PhoneInterface *meizu = new Phone("meizu");
	PhoneInterface *nubia = new Phone("nubia");
	PhoneInterface *oppo = new Phone("oppo");

	Mediator m;
	m.Register(xiaomi); m.Register(meizu); m.Register(nubia); m.Register(oppo);
	xiaomi->SendMessage(m, "My master is Lei Jun");
	m.DistributeMessage(xiaomi, "And yours is ?");
	return 0;
}