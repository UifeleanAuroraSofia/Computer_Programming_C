/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Scrieţi o aplicaţie C/C++ care citeşte caracter cu caracter un fişier text şi converteşte
primul caracter al fiecărui cuvânt în majusculă.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "UifeleanAurora_lab13_pr07_Header.h"

int main()
{
	int n;
	FILE* f = creare_si_verificare_fisier();
	char* propozitii = citire_din_fisier(f, n);
	convertire_in_fisier(f, propozitii, n);
}