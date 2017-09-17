#include "Adapter.h"

int main()
{
	ThirdParty *ptp = new ThirdParty();
	Adapter *pa = new Adapter(ptp);
	pa->public_api();
	delete ptp;
	delete pa;
	return 0;
}