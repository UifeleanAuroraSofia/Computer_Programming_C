/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Scrieţi un program C/C++ care citeşte de la tastatură un caracter apoi scrie acest caracter
într-un fişier text pe n linii, câte n caractere pe fiecare linie, n citit de la consola.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "UifeleanAurora_lab13_pr04_Header.h"

int main()
{
	int n;
	FILE* f = creare_si_verificare_fisier();
	char c = citire_de_la_tastatura(n);
	afisare_in_fisier(f, n, c);
}