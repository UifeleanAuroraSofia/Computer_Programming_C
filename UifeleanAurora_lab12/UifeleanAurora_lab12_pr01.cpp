/*UifeleanAurora, ETTI, Seria A, Grupa 4
Să se scrie un program C/C++, care folosind o structură numita Student, avand
campurile {nume, prenume, ţara de origine, grupa, anul naşterii}, să determine
numărul de studenţi străini din grupă (grupa de MAX studenti) şi să afişeze toate
datele acestora. Datele pentru studenţii din grupa se citesc de la intrarea standard,
până la întâlnirea numelui AAA.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include "UifeleanAurora_lab12_pr01_Headerfile.h"

Student* citire_studenti(int& i); // functie care aloca dinamic spatiu pentru 30 de studenti 
                                  // si ii citeste de la tastatura pana la intalnirea numelui AAA
void straini_in_grupe(Student* tab, int n); // functie care afiseaza datele studentilor straini
											// si numarul acestora
#define MAX_studenti_grupa 30

int main()
{
	int n = 0;
	Student* studenti = citire_studenti(n);
	straini_in_grupe(studenti, n);
	free(studenti);
}

Student* citire_studenti(int& i)
{
	i = -1;
	Student* tab;
	tab = (Student*)malloc(MAX_studenti_grupa * sizeof(Student));
	do
	{
		i++;
		printf("\n\tStudentul numarul %d:", i);
		citire(tab + i);
	} while (!(_stricmp((tab + i)->nume, "AAA") == 0 && i < MAX_studenti_grupa));
	return tab;
}

void straini_in_grupe(Student* tab, int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (_stricmp((tab + i)->tara_de_origine, "RO") != 0)
		{
			k++;
			printf("\n\tStudentul numarul %d este strain. Datele acestuia sunt:", i);
			afisare(tab + i);
		}
	}
	printf("\n\tNumarul de studenti straini este: %d", k);
}