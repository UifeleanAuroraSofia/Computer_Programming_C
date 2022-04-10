/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program pentru determinarea valorii medii a elementelor pozitive/negative dintr-un tablou
unidimensional.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define DIM 50

float media_pozitiva(int a[], int n);
float media_negativa(int a[], int n);
void citire_sir(int a[], int n);

int main()
{
	int a[DIM], n;
	printf("Introduceti numarul de numere intregi: ");
	scanf("%d", &n);
	printf("Introduceti %d numere intregi: ", n);
	citire_sir(a, n);
	printf("Media numerelor negative este: %f\n", media_negativa(a, n));
	printf("Media numerelor pozitive este: %f", media_pozitiva(a, n));
	return 0;
}

void citire_sir(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (a + i)); // &a[i]
	}
}

float media_negativa(int a[], int n)
{
	float mn = 0;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			mn = mn + *(a + i); // mn = mn + a[i]; *(a + i)
			k++;
		}
	}
	mn = (float)(mn / k);
	return mn;
}

float media_pozitiva(int a[], int n)
{
	float mp = 0;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 0)
		{
			mp = mp + *(a + i);
			k++;
		}
	}
	mp = (float)(mp / k);
	return mp;
}