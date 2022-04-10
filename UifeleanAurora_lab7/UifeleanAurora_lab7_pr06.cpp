/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care determină cel mai mare divizor comun a doi întregi
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
using namespace std;

int cmmdc(int a, int b);

int main()
{
	int a, b;
	printf_s("Introduceti doua numere intregi: ");
	scanf_s("%d%d", &a, &b);
	printf_s("Cel mai mare divizor comun a doi intregi: %d", cmmdc(a, b));
	return 0;
}

int cmmdc(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}