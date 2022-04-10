/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Scrieţi un program care citeşte de la consolă n numere întregi pe care le scrie într-un fişier
text cu numele citit de la tastatură. Citiţi apoi numerele din fişier, determinaţi media lor
aritmetică, pe care o adăugaţi la sfârşitul fişierului şi o afişaţi şi pe ecran.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "UifeleanAurora_lab13_pr03_Header.h";

int main()
{
	FILE* f = creare_si_verificare_fisier();
	int n, * nr = citire_de_la_tastatura(n);
	afisare_in_fisier(f, n, nr);
	citire_din_fisier(f, n, nr);
	media(f, nr, n);
}