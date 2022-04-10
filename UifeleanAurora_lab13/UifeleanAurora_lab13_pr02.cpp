/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Să se scrie un program care citeşte dintr-un fişier text 10 numere întregi (generat in
prealabil prin program sau extern). Să se scrie funcţiile care:
a. aranjează crescător/descrescator şirul si afiseaza rezultatul;
b. numără câte elemente sunt pare si afiseaza rezultatul.
Adăugați în fișierul original noile rezultate obținute
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "UifeleanAurora_lab13_pr02_Header.h";

int main()
{
	FILE* fps = creare_si_verificare_fisier();
	int* nr = citire_din_fisier(fps);
	sortare(nr);
	afisare_in_fisier(nr, fps);
}