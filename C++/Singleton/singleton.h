class Singleton
{
public:
	static Singleton *Instance();
	static Singleton Instance2();
protected:
	Singleton();
private:
	static Singleton *_instance;
};