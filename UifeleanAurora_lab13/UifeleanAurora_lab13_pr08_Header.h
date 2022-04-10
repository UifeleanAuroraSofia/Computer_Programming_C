/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Scrieţi un program care citeşte valori reale dintr-un fişier creat în prealabil si scrie într-un
alt fişier partea întreagă a numerelor pozitive citite.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define dim 20
#define dimensiune 256

FILE* creare_si_verificare_fisier_sursa();
FILE* creare_si_verificare_fisier_destinatie();
float* citire_din_fisier(FILE *fps, int& n);
void afisare_in_fisier(FILE* fpd, float* tab, int n);

FILE* creare_si_verificare_fisier_sursa()
{
	FILE* fps;
	char nume_fis[dim] = "intrare8.txt", nume[dim];
	do
	{
		printf("\n\tIntroduceti numele fisierului de intrare: ");
		gets_s(nume, _countof(nume));
		if ((_stricmp(nume_fis, nume)) != 0)
		{
			printf("\n\tNume gresit! Mai incearca!");
		}
	} while ((_stricmp(nume_fis, nume)));
	errno_t err;
	err = fopen_s(&fps, nume, "r+");
	if (err != 0)
	{
		printf("\n\tEroare la crearea fisierului!");
	}
	else
	{
		return fps;
	}
}

FILE* creare_si_verificare_fisier_destinatie()
{
	FILE* fpd;
	char nume_fis[dim] = "iesire8.txt", nume[dim];
	do
	{
		printf("\n\tIntroduceti numele fisierului de iesire: ");
		gets_s(nume, _countof(nume));
		if ((_stricmp(nume_fis, nume)) != 0)
		{
			printf("\n\tNume gresit! Mai incearca!");
		}
	} while ((_stricmp(nume_fis, nume)));
	errno_t err;
	err = fopen_s(&fpd, nume, "w+");
	if (err != 0)
	{
		printf("\n\tEroare la crearea fisierului!");
	}
	else
	{
		return fpd;
	}
}

float* citire_din_fisier(FILE* fps, int& n)
{
	float* nr;
	fscanf(fps, "%d", &n);
	if ((nr = (float*)malloc(n * sizeof(float))))
	{
		for (int i = 0; i < n; i++)
		{
			fscanf(fps, "%f", nr + i);
		}
	}
	return nr;
}

void afisare_in_fisier(FILE* fpd, float* tab, int n)
{
	fprintf(fpd, "\n\tPartea intreaga a numerelor citite este: ");
	for (int i = 0; i < n; i++)
	{
		fprintf(fpd, "%d ", (int)(* (tab + i)));
	}
}