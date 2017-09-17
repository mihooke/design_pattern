/* Adapter pattern is to use to slove the problem of different interface(s)
 * if you are using a third-party library which provides another interface.
 * So you can use Adapter to encapsulate your fixed interface(s) as well as
 * old code would not be changed.
*/

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