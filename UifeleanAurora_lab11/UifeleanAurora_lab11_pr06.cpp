/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Folosiţi alocarea dinamică pentru o matrice m x n cu valori întregi (m, n <7).
Initializaţi elementele matricii. Dacă matricea este pătratică, folosiţi metoda lui Sarrus
pentru a obţine valoarea determinantului. Afişaţi rezultatul şi eliberaţi memoria.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include<iostream>

using namespace std;

int** citire(int& m, int& n);
void Sarrus(int** mat, int &m, int &n);

int main()
{
	int m = 0, n = 0, ** mat = citire(m, n);
	Sarrus(mat, m, n);
	return 0;
}

int** citire(int& m, int& n)
{
	int** mat = NULL;
	printf("\n\tIntroduceti numarul de linii: ");
	scanf("%d", &m);
	printf("\n\tIntroduceti numarul de coloane: ");
	scanf("%d", &n);
	if ((mat = (int**)malloc(m * sizeof(int*))) && m < 7 && n < 7)
	{
		for (int i = 0; i < m; i++)
		{
			*(mat + i) = (int*)malloc(n * sizeof(int));
			if (*(mat + i) == 0)
			{
				printf("\n\tAlocare nereusita!");
				break;
			}
		}
		printf("\n\tIntroduceti elementele tabloului: \n");
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> *(*(mat + i) + j);
			}
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	return mat;
}

void Sarrus(int** mat, int &m, int &n)
{
	int suma = 0;
	if (m == n)
	{
		*(mat + m) = (int*)malloc(n * sizeof(int));
		*(mat + m) = *(mat + 0);
		*(mat + m + 1) = (int*)malloc(n * sizeof(int));
		*(mat + m + 1) = *(mat + 1);
		for (int i = 0; i < 3; i++)
		{
			int Su = 1;
			for (int j = 0; j < n; j++)
			{
				Su *= *(*(mat + (j + i)) + j);
			}
			suma += Su;

			int Sc = 1;
			for (int j = 0; j < n; j++)
			{
				Sc *= *(*(mat + (j + i)) + n - 1 - j);
			}
			suma -= Sc;
		}
		printf("\n\tDeterminantul matricei (Sarrus) este: %d", suma);
	}
	else
	{
		printf("\n\tMatricea nu este patratica!");
	}
}