/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program pentru determinarea celui mai mic element pozitiv dintr-un tablou
unidimensional.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define DIM 50

void cel_mai_mic_el_pozitiv(int a[], int n);
void citire_sir(int a[], int n);

int main()
{
	int a[DIM], n;
	printf("Introduceti numarul de numere intregi: ");
	scanf("%d", &n);
	printf("Introduceti %d numere intregi: ", n);
	citire_sir(a, n);
	cel_mai_mic_el_pozitiv(a, n);
	return 0;
}

void cel_mai_mic_el_pozitiv(int a[], int n)
{
	int mini = 1000000;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 0 && a[i] <= mini)
		{
			mini = *(a + i);
		}
	}
	printf("Cel mai mic element pozitiv: %d\n", mini);
}

void citire_sir(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (a + i));
	}
}