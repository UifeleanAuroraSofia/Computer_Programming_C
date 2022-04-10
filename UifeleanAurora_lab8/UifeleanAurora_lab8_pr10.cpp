/*UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi programul care citeşte elementele întregi ale unui tablou unidimensional 
şi construieşte într-o funcţie un alt tablou unidimensional în care se vor stoca 
resturile împărţirii elementelor primului tablou la numărul elementelor pozitive din acesta.
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define DIM 50

void citire_sir(int a[], int n);
void tablou_resturi(int a[], int b[], int n);
void afisare_sir(int a[], int n);

int main()
{
	int a[DIM], b[DIM], n;
	printf("Introduceti numarul de elemente din sir: ");
	scanf("%d", &n);
	citire_sir(a, n);
	printf("Tabloul obtinut din restul impartirii elemtelor la numarul de elemente pozitive este: ");
	tablou_resturi(a, b, n);
	afisare_sir(b, n);
}

void citire_sir(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

void tablou_resturi(int a[], int b[], int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 0)
		{
			k++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i] % k;
	}
}

void afisare_sir(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}