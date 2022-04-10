/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi un program în care se citesc de la tastatură elementele de tip întreg ale unei
matrici pătratice, utilizând o funcţie. Scrieţi o funcţie care determină numărul de
elemente negative de deasupra diagonalei secundare. Afisaţi rezultatul în main() (fără
variabile globale).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<iostream>

using namespace std;

int** cititre_matrice(int& m, int& n);
void elemente_deasupra_diagonala_secundara(int** a, int m, int n);

int main(void)
{
	int m = 0, n = 0, o = 0, p = 0;
	int** a = cititre_matrice(m, n);
	elemente_deasupra_diagonala_secundara(a, m, n);
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
		if (n == m)
		{
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
	}
	else
	{
		printf("\nAlocare nereusita\n");
	}
	return a;
}

void elemente_deasupra_diagonala_secundara(int** a, int m, int n)
{
	int k = 0;
	printf("\nNumarul de elemente negative deasupra diagonalei pricipale este: ");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j + i < n - 1 && *(*(a + i)+ j) < 0)
			{
				k++;
			}
		}
	}
	printf("%d", k);
}