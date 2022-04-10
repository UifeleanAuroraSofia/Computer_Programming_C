/*UifeleanAuroraSofia, ETTI, Seria A, grupa 4
. Să se citească de la tastatură elementele întregi ale unei matrice de dimensiune m x n. 
Dacă matricea este pătratică să se afişeze elementele diagonalei secundare, 
altfel să se afişeze suma elementelor de pe o coloană dată, c. Valorile m, n şi c se citesc
de la tastatură şi se vor scrie funcţii pentru operaţiile cerute
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<cstring>

#define DIM 50

void citire(int a[][DIM], int m, int n);
void afisare_elemente_diagonala_secundara(int a[][DIM], int m, int n);
int suma_pe_coloana(int a[][DIM], int m, int c);

int main()
{
	int a[DIM][DIM], m, n, c;
	printf("Introduceti dimensiunile matricii: ");
	scanf("%d%d", &m, &n);
	printf("Introduceti o coloana c: ");
	scanf("%d", &c);
	if ((m > 0 && n > 0) && (m < 50 && n < 50))
	{
		citire(a, m, n);
		if (m == n)
		{
			printf("Elementele diagonalei secundare sunt: ");
			afisare_elemente_diagonala_secundara(a, m, n);
		}
		else
		{
			int suma = suma_pe_coloana(a, m, c);
			printf("Suma de pe coloana %d este: %d", c, suma);
		}
	}
	else
	{
		printf("Valorile introduse sunt gresite!");
	}
	return 0;
}

void citire(int a[][DIM], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}

void afisare_elemente_diagonala_secundara(int a[][DIM], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (n == i + j + 1)
			{
				printf("%d ", a[i][j]);
			}
		}
	}
}

int suma_pe_coloana(int a[][DIM], int m, int c)
{
	c--;
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		s += a[i][c];
	}
	return s;
}