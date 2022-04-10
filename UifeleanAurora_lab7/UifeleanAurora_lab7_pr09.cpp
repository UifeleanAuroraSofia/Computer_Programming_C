/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care determină câtul împărţirii a doi întregi folosind scăderi succesive
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
using namespace std;

int cat_scaderi_repetate(int a, int b);

int main()
{
	int a, b;
	printf_s("Introduceti doua numere intregi: ");
	scanf_s("%d%d", &a, &b);
	printf_s("Catul impartirii celor doi intregi folosind scaderi succesive: %d", cat_scaderi_repetate(a, b));
	return 0;
}

int cat_scaderi_repetate(int a, int b)
{
	int c = 0;
	while (a >= b)
	{
		a = a - b;
		c++;
	}
	return c;
}