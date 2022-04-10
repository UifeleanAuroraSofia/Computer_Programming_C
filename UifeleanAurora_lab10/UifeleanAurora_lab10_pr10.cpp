/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi un program C/C++ în care se citesc de la tastatură elementele de tip întreg ale
unui tablou unidimensional a, utilizând o funcţie. Scrieţi o funcţie care completează
un alt tablou unidimensional b, fiecare element al acestuia fiind obţinut prin scăderea
mediei aritmetice a elementelor din a din elementul corespunzător din a. Scrieţi o
funcţie care permite afişarea unui tablou unidimensional şi afişaţi tablourile
unidimensionale a şi b. (utilizând pointeri, fără variabile globale).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int* citire(int& n);
float medie(int* v, int& n);
float* creare(int *a, int& n, float m);
void afisare_int(int* v, int n);
void afisare_float(float* v, int n);

int main()
{
	int n = 0, * a = citire(n);
	float media = medie(a, n), * b = creare(a, n, media);
	afisare_int(a, n);
	afisare_float(b, n);
	return 0;
}


int* citire(int& n)
{
	int* a;
	printf("\nIntroduceti numarul de medii flotante ale studentilor: ");
	scanf("%d", &n);
	a = new int[n];
	printf("\nIntroduceti mediile flotante ale studentilor: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (a + i));
	}
	return a;
}

float medie(int* v, int& n)
{
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		m = m + *(v + i);
	}
	return (float)m / n;
}

float* creare(int* a, int& n, float m)
{
	float* b;
	b = new float[n];
	for (int i = 0; i < n; i++)
	{
		*(b + i) = *(a + i) - m;
	}
	return b;
}

void afisare_int(int* v, int n)
{
	printf("\nElementele primului tablou sunt: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", * (v + i));
	}
}

void afisare_float(float* v, int n)
{
	printf("\nElementele celui de al doilea tablou sunt: ");
	for (int i = 0; i < n; i++)
	{
		printf("%.2f ", *(v + i));
	}
}