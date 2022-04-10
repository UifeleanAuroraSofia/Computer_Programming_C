/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru determinarea timpului in care se intalnesc doua masini
care merg cu viteza v1 si respectiv viteza v2
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int v1, v2;
	printf_s("Introduceti vitezele a doua masini: ");
	scanf_s("%d%d", &v1, &v2);
	float t = (float) 100 / (v1 + v2);
	printf_s("Timpul in care cele doua masini se intalnesc este: %f minute.", t * 60);
	return 0;
}