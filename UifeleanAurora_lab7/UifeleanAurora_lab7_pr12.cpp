/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care citeste un număr întreg n de la tastatură.
- citeste apoi numere reale, până când suma lor depăşeşte valoarea lui n.
- afiseaza suma numerelor citite, cu o precizie de 2 zecimale şi numărul lor (câte s-au introdus).
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<conio.h>
using namespace std;

int numar_cifre(int n);

int main()
{
	int n, i = 0, citire;
	float nr, S = 0;
	printf_s("Introduceti un numar intreg: ");
	scanf_s("%d", &n);
	do
	{
		printf_s("Introduceti un numar real: ");
		scanf_s("%f", &nr);
		S = S + nr;
		i++;
	} while (S <= n);
	printf_s("Suma numerelor citite: %0.2f\n", S);
	printf_s("Numarul de numere: %d\n", i);
	return 0;
}

