/*UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi un program care preia de la tastatură “n” valori reale într-un tablou unidimensional,
calculează cu o funcţie valoarea medie a valorilor introduse si afişează cu o altă funcţie doar
valorile din tablou mai mari decît valoarea medie calculată.
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define DIM 50

void citire_sir(float a[], int n);
void valoare_medie(float a[], float &val, int n);
void afisare_valori_mai_mari_decat_media(float a[], float val, int n);

int main()
{
	float a[DIM], val = 0;
	int n;
	printf("Introduceti numarul de numere din sir: ");
	scanf("%d", &n);
	citire_sir(a, n);
	valoare_medie(a, val, n);
	printf("Valorile mai mari decat valoarea medie %f sunt: ", val);
	afisare_valori_mai_mari_decat_media(a, val, n);
}

void citire_sir(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%f", &a[i]);
	}
}

void valoare_medie(float a[], float &val, int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		val += a[i];
		k++;
	}
	val = (float)val / k;
}

void afisare_valori_mai_mari_decat_media(float a[], float val, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > val)
		{
			printf("%f ", a[i]);
		}
	}
}