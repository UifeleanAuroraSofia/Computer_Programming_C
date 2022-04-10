/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Scrieţi un program C/C++ care citeşte de la tastatură valori reale în format float, cu
confirmare. Valorile citite vor fi scrise într-un fişier text cu numele citit din linia de
comandă. Citiţi apoi fişierul şi afişati valorile mai mari decât o valoare dată, citită de la
tastatură.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "UifeleanAurora_lab13_pr06_Header.h"

int main(int argc, char* argv[])
{
	FILE* f = creare_si_verificare_fisier(argc, argv);
	int n;
	float val = 0.0f, *nr = citire_de_la_tastatura(f, n, val);
	afisare_in_fisier(f, nr, n, val);
}