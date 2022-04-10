/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Să se scrie o aplicaţie C/C++ care citeşte un fişier text linie cu linie şi îl afişează pe
ecran. Se va folosi un fisier existent din sistem sau se va genera in prealabil unul prin
program.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "UifeleanAurora_lab13_pr05_Header.h"

int main()
{
	FILE* f = creare_si_verificare_fisier();
	citire_din_fisier_si_afisare_la_tastatura(f);
}