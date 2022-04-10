#pragma once/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Scrieţi un program care citeşte de la consolă n numere întregi pe care le scrie într-un fişier
text cu numele citit de la tastatură. Citiţi apoi numerele din fişier, determinaţi media lor
aritmetică, pe care o adăugaţi la sfârşitul fişierului şi o afişaţi şi pe ecran.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define dim 20

FILE* creare_si_verificare_fisier();
int* citire_de_la_tastatura(int& n);
void afisare_in_fisier(FILE* f, int n, int* nr);
int* citire_din_fisier(FILE* f, int n, int* nr);
void media(FILE* f, int* nr, int n);

FILE* creare_si_verificare_fisier()
{
	FILE* f;
	char num_fis[dim] = "fisier3.txt", nume[dim];
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
	err = fopen_s(&f, nume, "w+");
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

int* citire_de_la_tastatura(int& n)
{
	int* nr;
	printf("\n\tIntroduceti numarul de numere: ");
	scanf("%d", &n);
	if ((nr = (int*)malloc(n * sizeof(int))))
	{
		printf("\n\tIntroduceti cele %d numere intregi: ", n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", nr + i);
		}
	}
	return nr;
}

void afisare_in_fisier(FILE* f, int n, int* nr)
{
	fseek(f, 0L, SEEK_CUR);
	for (int i = 0; i < n; i++)
	{
		fprintf(f, "%d ", *(nr + i));
	}
}

int* citire_din_fisier(FILE* f, int n, int* nr)
{
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%d", nr + i);
	}
	return nr;
}

void media(FILE* f, int* nr, int n)
{
	float m = 0.0f;
	for (int i = 0; i < n; i++)
	{
		m += *(nr + i);
	}
	printf("\n\tMedia numerelor este: %.2f ", (float)m / n);
	fseek(f, 0L, SEEK_END);
	fprintf(f, "\n\tMedia numerelor este: %.2f", (float)m / n);
}