# Design_Pattern


# 1  Adapter
 * Adapter pattern is to use to slove the problem of different interface(s)
 * if you are using a third-party library which provides another interface.
 * So you can use Adapter to encapsulate your fixed interface(s) as well as
 * old code would not be changed.

 # 2  AbstractFactory
 * AbstractFactory pattern is a abstract class to generate many instances, 
 * so you can use virtual property in this pattern.

 # 3  Factory
 * Factory pattern can create objects base on one-type class, that is to say
 * if you want to create another objects of another class, then you must 
 * provide another class's interface or achieving.

 # 4  Observer
 * Observer pattern, is very common to use in fact coding.The MVC framework is use Observer to design.
 * It sloves a problem, like a subject depends some observer, if a subject changes, some observers all could know these changes.
 * The best example is, when you want to show a list of data in defferent styles, thus your data is subject
 * and styles are observers. When data changes, all styles could change synchronously.

 # 5  Bridge
 * Bridge pattern mainly use composition to detach a abstract class and its opsration. That means one class devides some abstract interfaces, and the other class devides those interfaces realization.

 # 6 Singleton
 * Singleton pattern, just as its name implies, you can only create one instance.This is very useful in fact projects.Urually you need to express some things as a single object, e.g. the number of tickets in a ticket system.
 * Sometimes, we want to forbidden to copy between classes using copy constructor.The Boost library boost::noncopyable is a better selection.

 # 7 Decorator
 * The core of this pattern is providing extendibilities to client for users who use the encapsluted functions, for example, the interfaces in EXPORT DLLs.If you want to add a new function to a DLL, but you don't want to destory the encasluted class...
 * So you could use decorator, either a class or lots of classes(in our living example code is SubComponent class), you just create only one decorator class(in our living example code is Decorator class), then add the new functions to here. 