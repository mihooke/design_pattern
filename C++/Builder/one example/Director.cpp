#include "Director.h"
#include "Builder.h"

Director::Director(Builder *b) : m_builder(b)
{
}

Director::~Director()
{
}

void Director::CreatBuilder()
{
	m_builder->BuilderFunc1("Director invoke1");
	m_builder->BuilderFunc2("Director invoke2");
	m_builder->BuilderFunc3("Director invoke3");
	m_builder->GetProduct();
}