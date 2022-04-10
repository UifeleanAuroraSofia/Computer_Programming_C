/*UifeleanAurora, ETTI, Seria A, Grupa 4
Să se scrie o aplicaţie C/C++, care utilizând o structură de tip Angajat, să afişeze toate
datele persoanelor cu ocupaţia inginer dintr-o întreprindere (nume, prenume,
ocupaţia, data naşterii, secţia în care lucrează).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include "UifeleanAurora_lab12_pr04_Headerfile.h"

Angajat* citire_angajati(int& n);
void afisare_ingineri(Angajat* tab, int n);

int main()
{
	int n = 0;
	Angajat* angajati = citire_angajati(n);
	printf("\n\tInginerii: \n");
	afisare_ingineri(angajati, n);
	free(angajati);
	return 0;
}

Angajat* citire_angajati(int& n)
{
	Angajat* tab;
	printf("\n\tIntroduceti numarul de angajati: ");
	scanf("%d", &n);
	if ((tab = (Angajat*)malloc(n * sizeof(Angajat))))
	{
		printf("\n\tIntroduceti cei %d angajati", n);
		for (int i = 0; i < n; i++)
		{
			printf("\n\tAngajatul numarul %d", i);
			citire(tab + i);
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	return tab;
}

void afisare_ingineri(Angajat* tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (_stricmp((tab + i)->ocupatia, "inginer") == 0)
		{
			afisare(tab + i);
		}
	}
}