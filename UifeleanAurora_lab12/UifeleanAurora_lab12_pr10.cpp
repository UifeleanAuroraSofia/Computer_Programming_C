/*UifeleanAurora, ETTI, Seria A, Grupa 4
Să se definească o structură cu numele Masina, care are câmpurile producator, anul
fabrictiei, capacitatea_cilindrică și culoare. Să se aloce dinamic memorie pentru n
date de tip Maşina şi să se citească informaţiile pentru acestea. Să se afişeze
inregistrarile maşinilor de culoare roşie, fabricate după anul 2010.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include "UifeleanAurora_lab12_pr10_Headerfile.h"

Masina* citire_masini(int& n);
void afisare_masini_rosii_dupa_2010(Masina* tab, int n);

int main()
{
	int n = 0;
	Masina *masini = citire_masini(n);
	afisare_masini_rosii_dupa_2010(masini, n);
	free(masini);
	return 0;
}

Masina* citire_masini(int& n)
{
	Masina* tab = NULL;
	printf("\n\tIntroduceti numarul de masini: ");
	scanf("%d", &n);
	if ((tab = (Masina*)malloc(n * sizeof(Masina))))
	{
		printf("\n\tIntroduceti %d masini", n);
		for (int i = 0; i < n; i++)
		{
			printf("\n\tIntroduceti masina numarul %d", i);
			citire(tab + i);
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	return tab;
}

void afisare_masini_rosii_dupa_2010(Masina* tab, int n)
{
	printf("\n\tMasinile care sunt rosii si sunt fabricate dupa anul 2010 sunt: \n");
	for (int i = 0; i < n; i++)
	{
		if ((_stricmp((tab + i)->culoare, "rosu")) == 0 && (tab + i)->anul_fabricatiei >= 2011)
		{
			afisare(tab + i);
		}
	}
}