/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C/C++ care alocă dinamic memorie necesară pentru stocarea a
10.000 de numere întregi. Programul iniţializează numerele cu valori aleatoare între 1
şi 100 (folosiţi funcţiile srand() şi/sau rand() în VC++). Scrieţi o funcţie care afişează
cele mai frecvente 10 numere şi numărul lor de apariţii în tabloul iniţial.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<random>
#include<time.h>

int* generare_numere();
void frecventa(int* tab);

int main()
{
	int *tab = generare_numere();
	frecventa(tab);
	return 0;
}

int* generare_numere()
{
	int* tab = NULL;
	srand(time(NULL));
	tab = (int*)malloc(10000 * sizeof(int));
	for (int i = 0; i < 10000; i++)
	{
		*(tab + i) = rand() % 101 + 1;
	}
	return tab;
}

void frecventa(int* tab)
{
	int f[102] = { 0 }, g[102] = { 0 };
	for (int i = 0; i < 10000; i++)
	{
		f[*(tab + i)]++;
		g[*(tab + i)]++;
	}
	bool s;
	do
	{
		s = true;
		for (int i = 0; i < 100; i++)
		{
			if (f[i] < f[i + 1])
			{
				int aux = f[i];
				f[i] = f[i + 1];
				f[i + 1] = aux;
				s = false;
			}
		}
	} 	while (!s);
	int k = 1;
	for (int j = 0; j < 10 && k <= 10; j++)
	{
		for (int i = 0; i < 100 && k <= 10; i++)
		{
			if (f[j] == g[i])
			{
				printf("\n\tNumarul %d apare de %d ori", i, f[j]);
				k++;
			}
		}
	}
}