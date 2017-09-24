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