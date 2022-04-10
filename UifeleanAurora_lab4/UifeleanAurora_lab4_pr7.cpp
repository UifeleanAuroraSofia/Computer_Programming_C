/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program pentru calcularea unor sume din fractii subunitare (numere reale si intregi)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	float a, b, c, S;
	int d, e, f;
	printf_s("Introduceti de la tastatura 3 numere reale: ");
	scanf_s("%f%f%f", &a, &b, &c);
	S = 1 / a + 1 / b + 1 / c;
	printf_s("Rezultatul operatiei 1 / a + 1 / b + 1 / c este: %f\n", S);
	printf_s("Introduceti de la tastatura 3 numere intregi: ");
	scanf_s("%d%d%d", &d, &e, &f);
	S = 0;
	if (d == 1)
	{
		S++;
	}
	if (e == 1)
	{
		S++;
	}
	if (f == 1)
	{
		S++;
	}
	printf_s("Rezultatul operatiei 1 / a + 1 / b + 1 / c este: %f", S);
	return 0;
}