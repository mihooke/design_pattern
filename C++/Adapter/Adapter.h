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

class Adapter : public Target
{
public:
	Adapter(ThirdParty *ptp);
	~Adapter();
	void public_api();
private:
	ThirdParty *m_tp;
};

