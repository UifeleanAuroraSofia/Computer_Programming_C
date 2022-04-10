/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C/C++, care alocă dinamic memorie pentru stocarea
elementelor a două matrici de "m" linii şi "n" coloane. Să se scrie o funcţie care
calculează suma celor două matrici şi o funcţie pentru afişarea unei matrici. Să se
afişeze matricile iniţiale şi matricea obţinută.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<iostream>

using namespace std;

int** citire(int m, int n);
void afisare(int** tab, int m, int n);
int** suma(int** a, int** b, int m, int n);

int main()
{
	int m, n;
	printf("\tIntroduceti numarul de linii: ");
	scanf("%d", &m);
	printf("\tIntroduceti numarul de coloane: ");
	scanf("%d", &n);
	int** a = citire(m, n), ** b = citire(m, n);
	afisare(a, m, n);
	afisare(b, m, n);
	int **c = suma(a, b, m, n);
	afisare(c, m, n);
	return 0;
}

int** citire(int m, int n)
{
	int** tab = NULL;
	if ((tab = new int* [m]))
	{
		for (int i = 0; i < m; i++)
		{
			*(tab + i) = new int[n];
			if (*(tab + i) == 0)
			{
				printf("\tAlocare nereusita!");
				break;
			}
		}
		printf("\tIntroduceti elementele tabloului: ");
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> *(*(tab + i) + j);
			}
		}
	}
	else
	{
		printf("\tAlocare nereusita!");
	}
	return tab;
}

void afisare(int** tab, int m, int n)
{
	printf("\n\tMatricea este: \n");
	for (int i = 0; i < m; i++)
	{
		printf("\t\t");
		for (int j = 0; j < n; j++)
		{
			printf("%d ", *(*(tab + i) + j));
		}
		printf("\n");
	}
}

int** suma(int** a, int** b, int m, int n)
{
	int** c = NULL;
	c = new int* [m];
	for (int i = 0; i < m; i++)
	{
		*(c + i) = new int[n];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			*(*(c + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
		}
	}
	return c;
}