/*UifeleanAurora, ETTI, Seria A, Grupa 4
Să se scrie un program C/C++, în care folosind câte o funcţie, se transferă ca
parametru o variabilă de tip structură de date prin valoare şi respectiv prin adresă,
folosind pointeri. În funcţia main( ) iniţializaţi câmpurile structurii cu date citite de la
tastatură. În ambele funcţii afişaţi datele din structură folosind un mesaj adecvat.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include "UifeleanAurora_lab12_pr02_Headerfile.h"

Pisici* citire_date (int &n);
void afisare_pisici(Pisici* pisicile, int n);

int main()
{
	int n = 0;
	Pisici* pisicile = citire_date(n);
	afisare_pisici(pisicile, n);
	free(pisicile);
}

Pisici* citire_date(int& n)
{
	Pisici* tab;
	printf("\n\tIntroduceti numarul de pisici: ");
	scanf("%d", &n);
	if ((tab = (Pisici*)malloc(n * sizeof(Pisici))))
	{
		printf("\n\tIntroduceti cele %d pisici: \n", n);
		for (int i = 0; i < n; i++)
		{
			printf("\n\tPisica numarul %d: ", i);
			citire(tab + i);
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	return tab;
}

void afisare_pisici(Pisici* pisicile, int n)
{
	printf("\n\n\tAfisare prin valoare:");
	for (int i = 0; i < n; i++)
	{
		afisare_prin_valoare(*(pisicile + i));
	}
	printf("\n\n\tAfisare prin adresa:");
	for (int i = 0; i < n; i++)
	{
		afisare_prin_adresa(pisicile + i);
	}
}