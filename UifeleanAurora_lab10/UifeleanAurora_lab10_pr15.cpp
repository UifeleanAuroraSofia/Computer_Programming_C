/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Ordonaţi crescător un tablou unidimensional de numere intregi citit de la tastatura
folosind funcţia de bibliotecă qsort( ) din stdlib.h. Folosiţi acelaşi algoritm pentru
numere de tip float pe care sa le ordonaţi descrescător.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h>

int* citire_int(int& n);
float* citire_float(int& n);
void afisare_int(int* v, int n);
void afisare_float(float* v, int n);
int crescator_int(const void* a, const void* b);
int descrescator_int(const void* a, const void* b);
int crescator_float(const void* a, const void* b);
int descrescator_float(const void* a, const void* b);

int main(void)
{
	int n, m;
	printf("\nIntroduceti numarul de elemente ale primului tablou: ");
	scanf("%d", &n);
	printf("\nIntroduceti numarul de elemente ale celui de al doilea tablou: ");
	scanf("%d", &m);
	int* a = citire_int(n);
	float* b = citire_float(m);

	qsort(a, n, sizeof(int), crescator_int);
	printf("\nSirul cu intregi ordonat crescator este: ");
	afisare_int(a, n);
	printf("\nSirul cu intregi ordonat descrescator este: ");
	qsort(a, n, sizeof(int), descrescator_int);
	afisare_int(a, n);

	qsort(b, m, sizeof(float), crescator_int);
	printf("\nSirul cu flotanti ordonat crescator este: ");
	afisare_float(b, m);
	printf("\nSirul cu flotanti ordonat descrescator este: ");
	qsort(b, m, sizeof(float), descrescator_int);
	afisare_float(b, m);
	return 0;
}

int* citire_int(int& n)
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

float* citire_float(int& n)
{
	float* a;
	a = new float[n];
	printf("Introduceti cele %d elemente flotante: ", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%f", (a + i));
	}
	return a;
}

void afisare_int(int* v, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(v + i));
	}
	printf("\n");
}

void afisare_float(float* v, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%.2f ", *(v + i));
	}
	printf("\n");
}

int crescator_int(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int descrescator_int(const void* a, const void* b)
{
	return (*(int*)b - *(int*)a);
}

int crescator_float(const void* a, const void* b)
{
	return ((int)(*(float*)a - *(float*)b));
}

int descrescator_float(const void* a, const void* b)
{
	return ((int)(*(float*)b - *(float*)a));
}