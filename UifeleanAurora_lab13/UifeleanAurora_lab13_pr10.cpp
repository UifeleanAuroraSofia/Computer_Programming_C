/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Să se scrie o aplicaţie care:
- defineşte o structură numită Student, cu câmpurile numele, prenumele, grupa, media;
- citeşte de la consolă un număr întreg n (numărul studentilor)
- pentru fiecare înregistrare de tip student, citeşte cu o funcţie datele aferente şi le scrie
într-un fişier, cu numele preluat de la consolă;
- citeşte conţinutul fişierului şi afişează studenţii ce au media mai mare decât o valoare
citită de la consolă.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "UifeleanAurora_lab13_pr10_Header.h"

int main()
{
	int n = 0; 
	float medie_max = 0.0f;
	FILE* f = creare_si_verificare_fisier();
	Student *studenti = citire_studenti_de_la_tastatura(n, medie_max);
	afisare_in_fisier(f, studenti, n);
	citire_si_afisare_din_fisier(f, studenti, n, medie_max);
}