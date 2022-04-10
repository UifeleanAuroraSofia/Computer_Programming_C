/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Declaraţi un pointer global de tip float. În funcţia main() citiţi o valoare întreagă N
care reprezintă dimensiunea tabloului de numere reale. Alocaţi memoria necesară
pentru stocarea tabloului şi citiţi elementele de la tastatură. Determinaţi valoarea
medie a celor N elemente şi calculaţi Mn=(sum(pow((xi-xmed),n))/N, unde n=1,2,3.
Afişaţi rezultatele şi apoi eliberaţi memoria. Folosiţi funcţiile malloc() şi free().
Generaţi numerele din tablou folosind funcţia de bibliotecă care generează numere
aleatoare şi determinaţi pentru acestea media valorilor şi Mn. Realizati aceeasi
aplicatie folosind operatorii new şi delete.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include<math.h>
#include<random>
#include<time.h>

float* tab = NULL;

float* citire(int n);
float media(float* a, int n);
float ecuatie(float* a, int N, float media);
void afisare(float* a, int n);

int main()
{
	int N;
	printf("\n\tIntroduceti numarul de elemente reale: ");
	scanf("%d", &N);
	tab = citire(N);
	afisare(tab, N);
	printf("\n\tRezultatul ecuatiei  Mn=(sum(pow((xi-xmed),n)))/N  este: %f", ecuatie(tab, N, media(tab, N)));
	if (tab)
	{
		free(tab);
		//delete tab;
	}
	return 0;
}

float* citire(int n)
{
	srand(time(NULL));
	float* a = NULL, p = 5.0f;
	a = (float*)malloc(n * sizeof(float));
	//a = new float [n];
	for (int i = 0; i < n; i++)
	{
		*(a + i) = ((float)rand() / (float)(RAND_MAX)) * p;
	}
	return a;
}

float media(float* a, int n)
{
	float media = 0.0f;
	for (int i = 0; i < n; i++)
	{
		media += *(a + i);
	}
	return (float)media / n;
}

float ecuatie(float* a, int N, float media) //Mn=(sum(pow((xi-xmed),n))/N
{
	float Mn = 0.0f;
	for (int i = 0; i < N; i++)
	{
		for (int n = 1; n <= 3; n++)
		{
			Mn += pow((*(a + i) - media), n);
		}
	}
	return (float)Mn / N;
}

void afisare(float* a, int n)
{
	printf("\tElementele generate aleator sunt: ");
	for (int i = 0; i < n; i++)
	{
		printf("%f ", *(a + i));
	}
}