#include "Strategy.h"
/*
 * Defines a family of algorithms, encapsulates each one, 
 * and make them interchangeable. Strategy lets the algorithm 
 * vary independently from clients who use it.
 * In OO programing,one important rule is 'Favor Composition Over Inheritance'.
 * So the Stategy pattern uses composition,and the Template pattern uses Inheritance.
 * Both two have advantages and disadvantages,use them on base fact project.
*/
int main()
{
	Strategy *s1 = new SubStrategy1();
	Strategy *s2 = new SubStrategy2();

	InvokeStrategy i(s1); // or i(s2)
	i.Invoke();
	return 0;
}