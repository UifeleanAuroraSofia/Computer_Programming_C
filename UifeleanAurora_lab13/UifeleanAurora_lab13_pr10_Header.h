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
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define dim 20

struct Student
{
	char nume[dim];
	char prenume[dim];
	int grupa;
	float media;
};

Student* citire_studenti_de_la_tastatura(int& n, int& medie_max);
void citire(Student* p);
void afisare(FILE *f, Student* p);
FILE* creare_si_verificare_fisier(FILE* f, int &n);
void citire_si_afisare_din_fisier(FILE* f, Student *p, int& n, float& medie_max);
void afisare_in_fisier(FILE* f, Student* p, int& n);

Student* citire_studenti_de_la_tastatura(int& n, float& medie_max)
{
	Student* studenti;
	printf("\n\tIntroduceti numarul de studenti: ");
	scanf("%d", &n);
	if ((studenti = (Student*)malloc(n * sizeof(Student))))
	{
		printf("\n\tIntroduceti cele %d persoane: ", n);
		for (int i = 0; i < n; i++)
		{
			printf("\n\tIntroduceti studentul numarul %d", i);
			citire(studenti + i);
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	printf("\n\tMedie minima: ");
	scanf("%f", &medie_max);
	return studenti;
}

void citire(Student* p)
{
	printf("\n\tNume: ");
	scanf("%s", p->nume);
	printf("\tPrenume: ");
	scanf("%s", p->prenume);
	printf("\tGrupa: ");
	scanf("%d", &p->grupa);
	printf("\tMedia: ");
	scanf("%f", &p->media);
}

void afisare(FILE* f, Student* p)
{
	fprintf(f, "\n\tNume: %s", p->nume);
	fprintf(f, "\n\tPrenume: %s", p->prenume);
	fprintf(f, "\n\tGrupa: %d", p->grupa);
	fprintf(f, "\n\tMedia: %.2f", p->media);
}

FILE* creare_si_verificare_fisier()
{
	FILE* f;
	char nume_fis[dim] = "fisier10.txt", nume[dim];
	do
	{
		printf("\n\tIntroduceti numele fisierului: ");
		gets_s(nume, _countof(nume));
		if ((_stricmp(nume_fis, nume)) != 0)
		{
			printf("\n\tNume incorect! Mai incearca!");
		}
	} while ((_stricmp(nume_fis, nume)));
	errno_t err;
	err = fopen_s(&f, nume, "w+");
	if (err != 0)
	{
		printf("\n\tCrearea fisierului este nereusita!");
		exit(1);
	}
	else
	{
		return f;
	}
}

void afisare_in_fisier(FILE* f, Student* p, int& n)
{
	for (int i = 0; i < n; i++)
	{
		afisare(f, p + i);
	}
}

void citire_si_afisare_din_fisier(FILE* f, Student* p, int& n, float& medie_max)
{
	for (int i = 0; i < n; i++)
	{
		if ((p + i)->media >= medie_max)
		{
			afisare(f, p);
		}
	}
}