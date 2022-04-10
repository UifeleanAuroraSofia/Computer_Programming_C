/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program care citeşte n numere reale, pe care le stochează într-un tablou
alocat dinamic, afişează suma elementelor negative citite, iar la sfârşit eliberează zona
de memorie alocată.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>

float suma_elemente_negative(float *tab, int n);

int main()
{
	int n;
	float* tab = NULL;
	printf("Cititi un numar care reprezinta numarul de elemente ale unui tablou de numere reale: ");
	scanf("%d", &n);
	if ((tab = (float*)malloc(n * sizeof(float))))
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%f", (tab + i));
		}
	}
	printf("Suma elementelor negative din tablou: %f", suma_elemente_negative(tab, n));
	free(tab);
	return 0;
}

float suma_elemente_negative(float* tab, int n)
{
	float s = 0.0f;
	for (int i = 0; i < n; i++)
	{
		if (*(tab + i) < 0)
		{
			s = s + *(tab + i);
		}
	} 
	return s;
}