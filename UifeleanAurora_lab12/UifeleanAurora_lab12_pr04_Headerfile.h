#include<stdio.h>

struct Angajat
{
	char nume[20];
	char prenume[20];
	char ocupatia[20];
	struct data_nasterii
	{
		int zi;
		int luna;
		int an;
	}data;
	char sectia_de_lucru[20];
	void citire(Angajat*);
	void afisare(Angajat*);
};

void citire(Angajat* p)
{
	printf("\n\tNume: ");
	scanf("%s", p->nume);
	printf("\tPrenume: ");
	scanf("%s", p->prenume);
	printf("\tOcupatia: ");
	scanf("%s", p->ocupatia);
	printf("\tData nasterii: ");
	printf("\n\t\tZiua: ");
	scanf("%d", &p->data.zi);
	printf("\t\tLuna: ");
	scanf("%d", &p->data.luna);
	printf("\t\tAn: ");
	scanf("%d", &p->data.an);
	printf("\tSectia de lucru: ");
	scanf("%s", p->sectia_de_lucru);
}

void afisare(Angajat* p)
{
	printf("\n\tNume: %s", p->nume);
	printf("\n\tPrenume: %s", p->prenume);
	printf("\n\tOcupatia: %s", p->ocupatia);
	printf("\n\tData nasterii: ");
	printf("\n\t\tZiua: %d", p->data.zi);
	printf("\n\t\tLuna: %d", p->data.luna);
	printf("\n\t\tAn: %d", p->data.an);
	printf("\n\tSectia de lucru: %s", p->sectia_de_lucru);
}