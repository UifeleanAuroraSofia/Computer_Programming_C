/*UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C/C++ în care se citesc într-un tablou unidimensional “n” 
valori întregi şi se determină numărul elementelor negative impare. 
Să se afişeze acest număr şi elementele respective.
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define DIM 50

void citire_sir(int a[], int n);
void afisare_el_negative_impare(int a[], int n);

int main()
{
	int a[DIM], n;
	printf("Introduceti numarul de elemente din sir: ");
	scanf("%d", &n);
	citire_sir(a, n); 
	printf("Numerele negative si impare din sir sunt: ");
	afisare_el_negative_impare(a, n);
}

void citire_sir(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

void afisare_el_negative_impare(int a[], int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0 && a[i] % 2 == -1)
		{
			k++;
			printf("%d ", a[i]);
		}
	}
	printf("\nAcestea sunt in numar de: %d", k);
}