#include<stdio.h>

struct Student
{
	char nume[20];
	char prenume[20];
	int nota_analiza;
	int nota_algebra;
	int nota_programare;
	int nota_info_aplicata;
	int nota_ccep;
	int nota_fizica;
};

void citire(Student* p)
{
	printf("\n\tNume: ");
	scanf("%s", p->nume);
	printf("\tPrenume: ");
	scanf("%s", p->prenume);
	printf("\tNota analiza matematica: ");
	scanf("%d", &p->nota_analiza);
	printf("\tNota algebra liniara: ");
	scanf("%d", &p->nota_algebra);
	printf("\tNota programare: ");
	scanf("%d", &p->nota_programare);
	printf("\tNota informatica aplicata: ");
	scanf("%d", &p->nota_info_aplicata);
	printf("\tNota fizica: ");
	scanf("%d", &p->nota_fizica);
	printf("\tNota CCEP: ");
	scanf("%d", &p->nota_ccep);
}

void afisare(Student p)
{
	printf("\n\tNume: %s", p.nume);
	printf("\n\tPrenume: %s", p.prenume);
	printf("\n\tNota analiza matematica: %d", p.nota_analiza);
	printf("\n\tNota algebra liniara: %d", p.nota_algebra);
	printf("\n\tNota programare: %d", p.nota_programare);
	printf("\n\tNota informatica aplicata: %d", p.nota_info_aplicata);
	printf("\n\tNota fizica: %d", p.nota_fizica);
	printf("\n\tNota CCEP: %d", p.nota_ccep);
}