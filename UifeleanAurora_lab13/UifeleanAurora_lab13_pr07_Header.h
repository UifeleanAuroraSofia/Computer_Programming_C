/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Scrieţi o aplicaţie C/C++ care citeşte caracter cu caracter un fişier text şi converteşte
primul caracter al fiecărui cuvânt în majusculă.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define dim 20
#define dimensiune 256 * 256

FILE* creare_si_verificare_fisier();
char* citire_din_fisier(FILE* f, int &i);
void convertire_in_fisier(FILE* f, char *propozitii, int n);

FILE* creare_si_verificare_fisier()
{
	FILE* f;
	char nume_fis[dim] = "fisier7.txt", nume[dim];
	do
	{
		printf("\n\tNumele fisierului este: ");
		gets_s(nume, _countof(nume));
		if ((_stricmp(nume_fis, nume)) != 0)
		{
			printf("\n\tNumele fisierului este diferit! Mai incearca!");
		}
	} while ((_stricmp(nume_fis, nume)));
	errno_t err;
	err = fopen_s(&f, nume, "r+");
	if (err != 0)
	{
		printf("\n\tFisierul nu s-a putut deschide!");
	}
	else
	{
		return f;
	}
}

char* citire_din_fisier(FILE* f, int &i)
{
	char c, * propozitii = NULL;
	i = 0;
	propozitii = (char*)malloc(dimensiune * sizeof(char));
	while (((c = fgetc(f)) != EOF))
	{
		*(propozitii + i) = c;
		i++;
	}
	return propozitii;
}

void convertire_in_fisier(FILE* f, char* propozitii, int n)
{
	char space = *(propozitii + 0);
	for (int i = 0; i < n; i++)
	{
		if (i == 0 && *(propozitii + i) >= 'a' && *(propozitii + i) <= 'z')
		{
			*(propozitii + i) = *(propozitii + i) - 32;
			fprintf(f, "%c", *(propozitii + i));
		}
		else
		if (*(propozitii + i) >= 'a' && *(propozitii + i) <= 'z' && space == ' ')
		{
			*(propozitii + i) = *(propozitii + i) - 32;
			fprintf(f, "%c", *(propozitii + i));
		}
		else
		{
			fprintf(f, "%c", *(propozitii + i));
		}
		space = *(propozitii + i);
	}
}