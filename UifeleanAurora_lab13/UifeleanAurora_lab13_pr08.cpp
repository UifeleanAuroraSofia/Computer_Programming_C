/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Scrieţi un program care citeşte valori reale dintr-un fişier creat în prealabil si scrie într-un
alt fişier partea întreagă a numerelor pozitive citite.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "UifeleanAurora_lab13_pr08_Header.h"

int main()
{
	int n = 0;
	FILE* fps = creare_si_verificare_fisier_sursa(), * fpd = creare_si_verificare_fisier_destinatie();
	float* tab = citire_din_fisier(fps, n);
	afisare_in_fisier(fpd, tab, n);
}