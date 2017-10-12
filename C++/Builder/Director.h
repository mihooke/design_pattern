#pragma once

class Builder;
class Director
{
public:
	Director(Builder *b);
	~Director();

	void CreatBuilder();

private:
	Builder *m_builder;
};

