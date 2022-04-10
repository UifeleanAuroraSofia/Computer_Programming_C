/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care numărul de cifre care compun un număr întreg citit de la tastatură
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
using namespace std;

int numar_cifre(int n);

int main()
{
	int n;
	printf_s("Introduceti un numer intreg: ");
	scanf_s("%d", &n);
	printf_s("Numarul de cifre care compun numarul %d este: %d", n, numar_cifre(n));
	return 0;
}

int numar_cifre(int n)
{
	int k = 0;
	while (n)
	{
		n = n / 10;
		k++;
	}
	return k;
}