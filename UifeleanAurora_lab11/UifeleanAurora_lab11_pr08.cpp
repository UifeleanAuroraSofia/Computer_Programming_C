/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C/C++ în care se alocă dinamic memorie pentru n numere
întregi, numere ce vor fi citite de la tastatură. Să se scrie funcţia care extrage radicalul
din fiecare număr şi stochează valorile obţinute într-un alt tablou alocat dinamic. Să
se afişeze numerele iniţiale şi valorile din tabloul format. Eliberaţi la sfârşit memoria
alocată.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include<math.h>
#include<iostream>

using namespace std;

int* citire(int& n);
float* radical(int* tab, int n);
void afisare_int(int*tab, int n);
void afisare_float(float* tab, int n);

int main()
{
	int n = 0, * tab = citire(n);
	float* rad = radical(tab, n);
	afisare_int(tab, n);
	afisare_float(rad, n);
	free(rad); free(tab);
	return 0;
}

int* citire(int& n)
{
	int* tab = NULL;
	printf("\n\tIntroduceti numarul de elemente intregi ale tabloului: ");
	scanf("%d", &n);
	printf("\n\t");
	if ((tab = (int*)malloc(n * sizeof(int))))
	{
		printf("Introduceti cele %d elemente: ", n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", tab + i);
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	return tab;
}

float* radical(int* tab, int n)
{
	float *rad = (float*)malloc(n * sizeof(float));
	for (int i = 0; i < n; i++)
	{
		*(rad + i) = sqrt(*(tab + i));
	}
	return rad;
}

void afisare_int(int* tab, int n)
{
	printf("\n\tTabloul este: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(tab + i));
	}
}

void afisare_float(float* tab, int n)
{
	printf("\n\tTabloul este: ");
	for (int i = 0; i < n; i++)
	{
		printf("%f ", *(tab + i));
	}
}