class Strategy
{
public:
	virtual void Operation() const = 0;
};

class SubStrategy1 : public Strategy
{
public:
	void Operation() const {}
};

class SubStrategy2 : public Strategy
{
public:
	void Operation() const {}
};

class InvokeStrategy
{
public:
	InvokeStrategy(Strategy *s) { m_s = s; }
	~InvokeStrategy();
	void Invoke();
private:
	Strategy *m_s;
};