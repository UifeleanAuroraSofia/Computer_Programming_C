/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Scrieţi un program C/C++ care citeşte de la tastatură un caracter apoi scrie acest caracter
într-un fişier text pe n linii, câte n caractere pe fiecare linie, n citit de la consola.
*/

#define _CRT_SECURE_NO_WARININGS

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

#define dim 20

FILE* creare_si_verificare_fisier();
char citire_de_la_tastatura(int& n);
void afisare_in_fisier(FILE* f, int n, char c);

FILE* creare_si_verificare_fisier()
{
	FILE* f;
	char num_fis[dim] = "fisier4.txt", nume[dim];
	do
	{
		printf("\n\tIntroduceti numele fisierului: ");
		gets_s(nume, _countof(nume));
		if ((_stricmp(num_fis, nume)) != 0)
		{
			printf("\n\tNumele introdus este gresit! Introduceti alt nume!");
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

char citire_de_la_tastatura(int& n)
{
	char c;
	printf("\n\tIntroduceti un caracter: ");
	scanf("%c", &c);
	printf("\n\tIntroduceti un numar: ");
	scanf("%d", &n);
	return c;
}

void afisare_in_fisier(FILE* f, int n, char c)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fprintf(f, "%c ", c);
		}
		fprintf(f, "\n");
	}
}