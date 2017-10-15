#include "Adapter.h"

int main()
{
	Adapter *pa = new Adapter();
	pa->public_api();
	delete pa;
	return 0;
}