/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Să se scrie o aplicaţie C/C++ care citeşte un fişier text linie cu linie şi îl afişează pe
ecran. Se va folosi un fisier existent din sistem sau se va genera in prealabil unul prin
program.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define dimf 20
#define dims 257

FILE* creare_si_verificare_fisier();
void citire_din_fisier_si_afisare_la_tastatura(FILE *f);

FILE* creare_si_verificare_fisier()
{
	FILE* f;
	char nume_fis[dimf] = "fisier5.txt", nume[dimf];
	do
	{
		printf("\n\tIntroduceti numele fisierului: ");
		gets_s(nume, _countof(nume));
		if ((_stricmp(nume_fis, nume)) != 0)
		{
			printf("\n\tNume gresit! Mai incercati odata!");
		}
	} while ((_stricmp(nume_fis, nume)));
	errno_t err;
	err = fopen_s(&f, nume, "r+");
	if (err != 0)
	{
		puts("Fisierul nu s-a putut deschide");
		exit(1);
	}
	else
	{
		return f;
	}
}

void citire_din_fisier_si_afisare_la_tastatura(FILE* f)
{
	char c;
	while ((c = fgetc(f)) != EOF)
	{
		printf("%c", c);
	}
}