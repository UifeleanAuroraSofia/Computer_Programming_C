/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C/C++ în care se generează aleator 20 de numere întregi cu valori mai mici
decât 50 (Folositi srand(), rand() si operatorul %). Să se scrie o funcţie care elimină din tabloul
unidimensional creat numerele impare. Funcţia va utiliza pointeri. Afişati în main() tabloul iniţial şi
cel obţinut după eliminarea elementelor impare.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generare_tablou(int a[]);
void stergere_impare(int a[], int &n);
void afisare_tablou(int a[], int n);

#define DIM 20

int main()
{
	int a[DIM], n = 20;
	generare_tablou(a);
	printf("\nElementele generate automat sunt: \n");
	afisare_tablou(a, n);
	stergere_impare(a, n);
	printf("\nElementele pare sunt: \n");
	afisare_tablou(a, n);
	return 0;
}

void generare_tablou(int a[])
{
	srand((unsigned)time(0));
	for (int i = 0; i < 20; i++)
	{
		*(a + i) = rand() % 50;
	}
}

void stergere_impare(int a[], int &n)
{
	n = 20;
	for (int i = 0; i < n; i++)
	{
		while (*(a + i) % 2 != 0)
		{
			for (int k = i; k < n - 1; k++)
			{
				*(a + k) = *(a + k + 1);
			}
			n--;
		}
	}
}

void afisare_tablou(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(a + i));
	}
}