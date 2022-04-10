/*UifeleanAurora, ETTI, Seria A, Grupa 4
Să se scrie o aplicaţie C/C++, care utilizând o structură de tip Angajat, să afişeze toate
datele persoanelor cu ocupaţia inginer dintr-o întreprindere (nume, prenume,
ocupaţia, data naşterii, secţia în care lucrează).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<iostream>
#include "UifeleanAurora_lab12_pr05_Headerfile.h"

Angajat* citire_angajati(int& n);
int comp_data_angajarii(const void* a, const void* b);
void afisare_angajati(Angajat* tab, int n);

int main()
{
	int n = 0;
	Angajat* angajati = citire_angajati(n);
	printf("\n\tAngajatii sortati dupa data angajarii: \n");
	qsort(angajati, n, sizeof(Angajat), comp_data_angajarii);
	afisare_angajati(angajati, n);
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

void afisare_angajati(Angajat* tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		afisare(tab + i);
	}
}

int comp_data_angajarii(const void* a, const void* b) {
	Angajat* pa = (Angajat*)a;
	Angajat* pb = (Angajat*)b;
	if (pa->data_a.an == pb->data_a.an)
	{
		if (pa->data_a.luna == pb->data_a.luna)
		{
			if (pa->data_a.zi == pb->data_a.zi)
			{
				return (pa->data_a.zi - pb->data_a.zi);
			}
			else
			{
				return (pa->data_a.zi - pb->data_a.zi);
			}
		}
		else
		{
			return (pa->data_a.luna - pb->data_a.luna);
		}
	}
	else
	{
		return (pa->data_a.an - pb->data_a.an);
	}
}