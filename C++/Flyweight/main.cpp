#include "flyweightfactory.h"
#include "flyweight.h"

/*
 * Flyweight pattern is similar to Factory pattern.But Flyweight only creates once
 * if there are many same objects i.e. below "mihooke".
 * Its property is very useful in many objects of your projects, hence you can save memory.
 * Also there is a property-inner state,we call the first property outter state.
 * You can use virtual function : Operation() to add new infomations for objects.
 * For example,"mihooke" Flyweight objects have two.In fact,only the first statement create the "mihooke" object
 * the third statement return the first object.
*/

int main()
{
	FlyweightFactory factory;
	factory.GetFlyweight("mihooke");
	factory.GetFlyweight("moery");
	factory.GetFlyweight("mihooke");
	return 0;
}