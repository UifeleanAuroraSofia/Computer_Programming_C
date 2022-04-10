/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
Să se scrie un program care citeşte şi apoi afişează date întregi preluate dintr-un fişier text
al cărui nume este citit de la consolă. Creati in prealabil fisierul prin program
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define dim 20

FILE* creare_si_verificare_fisier();
int* citire_din_fisier(FILE *f, int& n);
void afisare_in_fisier(FILE* f, int n, int* nr);

FILE* creare_si_verificare_fisier()
{
	FILE* f;
	char num_fis[dim] = "fisier1.txt", nume[dim];
	do
	{
		printf("\n\tIntroduceti numele fisierului: ");
		gets_s(nume, _countof(nume));
		if ((_stricmp(num_fis, nume)) != 0)
		{
			printf("\n\tNume introdus gresit! Mai incercati odata!");
		}
	} while ((_stricmp(num_fis, nume)));
	errno_t err;
	err = fopen_s(&f, nume, "r+");
	if (err != 0)
	{
		puts("Fisierul nu s-a putut deschide!");
		exit(1);
	}
	else
	{
		return f;
	}
}

int* citire_din_fisier(FILE *f, int& n)
{
	int* nr;
	fscanf(f, "%d", &n);
	if ((nr = (int*)malloc(n * sizeof(int))))
	{
		for (int i = 0; i < n; i++)
		{
			fscanf(f, "%d", nr + i);
		}
	}
	return nr;
}

void afisare_in_fisier(FILE* f, int n, int* nr)
{
	fprintf(f, "\n\tNumerele citite din fisier sunt: ");
	for (int i = 0; i < n; i++)
	{
		fprintf(f, "%d ", *(nr + i));
	}
}