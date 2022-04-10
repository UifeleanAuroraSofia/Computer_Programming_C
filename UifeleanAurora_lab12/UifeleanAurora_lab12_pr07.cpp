/*UifeleanAurora, ETTI, Seria A, Grupa 4
Să se scrie o aplicaţie C/C++, care alocă dinamic memorie pentru datele a n studenţi,
(nume, prenume si gen), citeşte datele pentru fiecare din aceştia, afişează numărul
studentelor si elibereaza memoria alocată.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include "UifeleanAurora_lab12_pr07_Headerfile.h"

Student* citire_studenti(int& n);
int numar_studente(Student* tab, int n);

int main()
{
	int n = 0;
	Student* studenti = citire_studenti(n);
	printf("\n\tNumarul de studente este egal cu: %d", numar_studente(studenti, n));
	free(studenti);
	return 0;
}

Student* citire_studenti(int& n)
{
	Student* tab = NULL;
	printf("\n\tIntroduceti numarul de studenti: ");
	scanf("%d", &n);
	if ((tab = (Student*)malloc(n * sizeof(Student))))
	{
		printf("\n\tIntroduceti %d studenti", n);
		for (int i = 0; i < n; i++)
		{
			printf("\n\tStudentul numarul %d", i);
			citire(tab + i);
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	return tab;
}

int numar_studente(Student* tab, int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (_stricmp((tab + i)->gen, "f") == 0)
		{
			k++;
		}
	}
	return k;
}