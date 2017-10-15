#pragma once

class Target
{
public:
	Target();
	virtual ~Target();
	virtual void public_api();
};

class ThirdParty
{
public:
	ThirdParty();
	~ThirdParty();
	void spec_public_api();
};

class Adapter : public Target, private ThirdParty
{
public:
	Adapter();
	~Adapter();
	void public_api();
};

