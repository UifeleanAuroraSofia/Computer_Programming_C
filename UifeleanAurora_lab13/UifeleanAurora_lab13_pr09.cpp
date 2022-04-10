/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Să se scrie o aplicaţie care:
- citeşte de la consolă un numar întreg n;
- citeşte de la consolă, cu o funcţie, “n” numere reale, într-un tablou unidimensional,
alocat dinamic în memorie;
- scrie aceste valori din tablou într-un fişier binar, al cărui nume este citit tot de la
consolă;
- citeşte apoi conţinutul fişierului şi afişează numerele din 3 în 3 poziţii, folosind funcţii
specifice accesului aleator la fişiere.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "UifeleanAurora_lab13_pr09_Header.h"

int main()
{
	int n = 0;
	FILE* f = creare_si_verificare_fisier();
	float* tab = citire_de_la_tastatura(n);
	afisare_in_fisier(f, tab, n);
	for (int k = 0; k < n; k++)
	{
		printf("%f ", *(tab + k));
	}
	printf("\n");
	citeste_din_fisier_si_afiseaza_in_fisier(f, tab, n);
	for (int k = 0; k < n; k++)
	{
		printf("%f ", *(tab + k));
	}
}