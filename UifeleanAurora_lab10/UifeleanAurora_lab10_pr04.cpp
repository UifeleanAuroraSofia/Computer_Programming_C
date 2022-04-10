/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Citiţi de la tastatură elementele a 2 matrici de valori întregi. Scrieţi o funcţie care
primeşte ca parametri pointerii la cele 2 matrici şi returnează un pointer la matricea
sumă. Rezultatul însumării matricelor va fi afişat în funcţia main. Afişaţi elementele
de pe diagoanala secundară a matricii sumă, folosind acelaşi pointer.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<iostream>

using namespace std;

int** cititre_matrice(int& m, int& n);
void suma_matrici(int** a, int& m, int& n, int** b, int& o, int& p, int& ok);
void elemente_diagonala_secundara(int** a, int m, int n);
void afisare(int** a, int m, int n);

int main(void)
{
	int m = 0, n = 0, o = 0, p = 0, ok = 1;
	int** a = cititre_matrice(m, n), ** b = cititre_matrice(o, p);
	afisare(a, m, n);
	printf("\n");
	afisare(b, o, p);
	suma_matrici(a, m, n, b, o, p, ok);
	printf("\nSuma celor doua matrici este: \n");
	afisare(a, m, n);
	elemente_diagonala_secundara(a, m, n);
	return 0;
}

int** cititre_matrice(int& m, int& n)
{
	int** a;
	printf("\nIntroduceti numarul de linii: ");
	cin >> m;
	if ((a = new int* [m]))
	{
		printf("\nIntroduceti numarul de coloane: ");
		cin >> n;
		for (int i = 0; i < m; i++)
		{
			*(a + i) = new int[n];
			if (*(a + i) == 0)
			{
				printf("\nEroare la alocare!\n");
				break;
			}
		}
		printf("\nIntroduceti elementele tabloului: ");
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> *(*(a + i) + j);
			}
		}
	}
	else
	{
		printf("\nAlocare nereusita\n");
	}
	return a;
}

void suma_matrici(int** a, int& m, int& n, int** b, int& o, int& p, int& ok)
{
	if (m != o || n != p)
	{
		printf("\nCele doua matrici nu se pot aduna!\n");
		ok = 0;
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				*(*(a + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
			}
		}


	}
}

void elemente_diagonala_secundara(int** a, int m, int n)
{
	printf("\nElementele de pe diagonala secundara sunt: ");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j + i == n - 1)
			{
				printf("%d ", *(*(a + i) + j));
			}
		}
	}
}

void afisare(int** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", *(*(a + i) + j));
		}
		printf("\n");
	}
}