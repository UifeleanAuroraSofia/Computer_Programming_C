/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi algoritmul care interclasează două tablouri unidimensionale de tip întreg.
Folosiţi pointeri.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int* citire(int& n);
int* interclasare(int *a, int n, int *b, int m);
void afisare(int* v, int n);

int main(void)
{
	int n, m;
	printf("\nIntroduceti numarul de elemente ale primului tablou: ");
	scanf("%d", &n);
	printf("\nIntroduceti numarul de elemente ale celui de al doilea tablou: ");
	scanf("%d", &m);
	int* a = citire(n);
	int* b = citire(m);
	int* c = interclasare(a, n, b, m);
	afisare(c, n + m);
	return 0;
}

int* citire(int& n)
{
	int* a;
	a = new int[n];
	printf("Introduceti cele %d elemente intregi: ", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (a + i));
	}
	return a;
}

int* interclasare(int* a, int n, int* b, int m)
{
	int* c;
	c = new int[n + m];
	int i = 0, j = 0, p = 0;
	while (i < n && j < m)
	{
		if (p % 2 == 0)
		{
			*(c + p++) = *(a + i++);
		}
		else
		{
			*(c + p++) = *(b + j++);
		}
	}
	while (i < n)
	{
		*(c + p++) = *(a + i++);
	}
	while (j < m)
	{
		*(c + p++) = *(b + j++);
	}
	return c;
}

void afisare(int* v, int n)
{
	printf("\nSirul rezultat este: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(v + i));
	}
	printf("\n");
}