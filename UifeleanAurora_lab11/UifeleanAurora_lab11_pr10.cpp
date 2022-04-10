/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C/C++, care alocă dinamic memorie pentru stocarea
elementelor unei matrici de dimensiune nxn. Să se scrie o funcţie care calculează
suma numerelor pozitive pare de sub diagonala principală şi o funcţie pentru afişarea
matricei. Să se afişeze matricea şi suma cerută. Eliberaţi memoria alocată dinamic.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include<iostream>

using namespace std;

int** citire(int& n);
int suma(int** tab, int n);
void afisare(int** tab, int n);

int main() 
{
	int n = 0, ** tab = citire(n), s = suma(tab, n);
	printf("\tSuma numerelor pozitive pare de sub diagonala principala este: %d", s);
	afisare(tab, n);
	free(tab);
	return 0;
}

int** citire(int& n) 
{
	int** tab = NULL;
	printf("\n\tIntroduceti dimensiunea matricei: ");
	scanf("%d", &n);
	if ((tab = (int**)malloc(n * sizeof(int*))))
	{
		for (int i = 0; i < n; i++)
		{
			*(tab + i) = (int*)malloc(n * sizeof(int));
			if ((*(tab + i)) == 0)
			{
				printf("\n\tAlocare nereusita! ");
			}
		}
		printf("\n\tIntroduceti elementele tabloului: ");
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> *(*(tab + i) + j);
			}
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	return tab;
}

int suma(int** tab, int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j && *(*(tab + i) + j) >= 0)
			{
				s += *(*(tab + i) + j);
			}
		}
	}
	return s;
}

void afisare(int** tab, int n)
{
	printf("\n\tElementele matricei sunt: \n\t\t\t\t");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", *(*(tab + i) + j));
		}
		printf("\n\t\t\t\t");
	}
}