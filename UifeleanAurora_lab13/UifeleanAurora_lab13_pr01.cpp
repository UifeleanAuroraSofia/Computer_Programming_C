/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
Să se scrie un program care citeşte şi apoi afişează date întregi preluate dintr-un fişier text
al cărui nume este citit de la consolă. Creati in prealabil fisierul prin program
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "UifeleanAurora_lab13_pr01_Header.h";

int main()
{
	FILE* fps = creare_si_verificare_fisier();
	int n, *nr = citire_din_fisier(fps, n);
	afisare_in_fisier(fps, n, nr);
}