/*UifeleanAurora, ETTI, Seria A, Grupa 4
Să se scrie un program care afişează numele, prenumele şi media studentului cu cele
mai bune rezultate din grupă în urma sesiunii de iarnă. Folosiţi pentru aceasta un
tablou de structuri, de un tip numit Student, alocarea dinamica, şi o funcţie care
returnează înregistrarea student cu media cea mai mare.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include "UifeleanAurora_lab12_pr06_Headerfile.h"

Student* citire_studenti(int& n);
Student student_medie_max(Student* tab, int n);
float medie(Student stud, int n);

int main()
{
	int n = 0;
	Student* studenti = citire_studenti(n);
	Student primul_student = student_medie_max(studenti, n);
	printf("\n\tStudentul cu media cea mai mare este: \n");
	afisare(primul_student);
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

Student student_medie_max(Student* tab, int n)
{
	float media_max = medie(*(tab + 0), n);
	int stud = 0;
	for (int i = 1; i < n; i++)
	{
		float media = medie(*(tab + i), n);
		if (media >= media_max)
		{
			media_max = media;
			stud = i;
		}
	}
	return *(tab + stud);
}

float medie(Student stud, int n)
{
	float media = 0.0f;
	media = stud.nota_analiza + stud.nota_algebra + stud.nota_programare + stud.nota_info_aplicata + stud.nota_fizica + stud.nota_ccep;
	media = (float)media / 6;
	return media;
}