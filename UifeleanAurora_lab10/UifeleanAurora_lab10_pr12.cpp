/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
 Scrieţi un program în care se citesc de la tastatură elementele de tip întreg ale unei
matrici pătratice, utilizând o funcţie. Scrieţi o funcţie care interschimbă două linii ale
matricii. Afişaţi cu o funcţie matricea iniţială şi cea obţinută. Dimensiunea matricii şi
numerele ce identifică liniile care vor fi interschimbate se citesc de la tastatură, în
funcţia main. (fără variabile globale).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<iostream>

using namespace std;

int** cititre_matrice(int& m, int& n);
void afisare(int** a, int m, int n);
void elemente_deasupra_diagonala_secundara(int** a, int m, int n);
void interschimbare_linii(int** a, int m, int n, int l1, int l2);

int main(void)
{
	int m = 0, n = 0, l1, l2;
	printf("\nIntroduceti numarul de linii: ");
	scanf("%d", &m);
	printf("\nIntroduceti numarul de coloane: ");
	scanf("%d", &n);
	int** a = cititre_matrice(m, n);
	printf("\nIntroduceti doua linii de interschimbat (indexare de la 0): ");
	scanf("%d%d", &l1, &l2);
	afisare(a, m, n);
	interschimbare_linii(a, m, n, l1, l2);
	return 0;
}

int** cititre_matrice(int& m, int& n)
{
	int** a;
	if ((a = new int* [m]))
	{
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

void interschimbare_linii(int** a, int m, int n, int l1, int l2)
{
	if (l1 >= 0 && l1 <= m - 1 && l2 >= 0 && l2 <= m - 1 && l1 != l2)
	{
		for (int i = 0; i < n; i++)
		{
			int aux = *(*(a + l1) + i);
			*(*(a + l1) + i) = *(*(a + l2) + i);
			*(*(a + l2) + i) = aux;
		}
		printf("\n");
		afisare(a, m, n);
	}
	else
	{
		printf("Date incorecte");
	}
}