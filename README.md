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

 # 8 Composite
 * Composite pattern is similar to Decorator,but Composite has a bias towards including a list of objects invoke them from outside

 # 9 Flyweight
 * Flyweight pattern is similar to Factory pattern.But Flyweight only creates once if there are many same objects i.e. below "mihooke".Its property is very useful in many objects of your projects, hence you can save memory.
 * Also there is a property-inner state,we call the first property outter state.You can use virtual function : Operation() to add new infomations for objects.For example,"mihooke" Flyweight objects have two.In fact,only the first statement create the "mihooke" object the third statement return the first object.

 # 10 Facade
 * Facade pattern is a encapsulation of dispersive public interfaces in a list of class in fact.
 * In many cases,the public interfaces is dispersive in multi-class i.e. ComponentOne/ComponentTwo... maybe they have different function name, but they may will be
 * invoked at the same time,therefore we need a class to provide them i.e. Facade

 # 11 Proxy
 * Proxy pattern is very very common for us, and widely uesed.This pattern is meaning of letting proxy to do things instead.
 * For example,1. in GUI,we usually create a thread to do time-consuming task.this thread is a proxy.
 * 2. in network,for quick response,we usually use a proxy to reply client instead server.So,you could find Facade pattern also uses Proxy pattern internally.