#include<stdio.h>
#include<string.h>
#include <stdlib.h>

struct Student
{
	char nume[20];
	char prenume[20];
	char tara_de_origine[20];
	int grupa;
	int anul_nasterii;
	void citire(Student*);
	void afisare(Student*);
};

void citire(Student* p)
{
	printf("\n\tNume student: ");
	scanf("%s", p->nume);
	if (_stricmp(p->nume, "AAA") == 0)
	{
		printf("\n\tCitire finalizata!");
	}
	else
	{
		printf("\tPrenume: ");
		scanf("%s", p->prenume);
		printf("\tTara de origine (ex. RO): ");
		scanf("%s", p->tara_de_origine);
		printf("\tGrupa: ");
		scanf("%d", &p->grupa);
		printf("\tAnul nasterii: ");
		scanf("%d", &p->anul_nasterii);
	}
}
void afisare(Student* p)
{
	printf("\n\tNume student: %s", p->nume);
	printf("\n\tPrenume student: %s", p->prenume);
	printf("\n\tTara de origine: %s", p->tara_de_origine);
	printf("\n\tGrupa: %d", p->grupa);
	printf("\n\tAnul nasterii: %d", p->anul_nasterii);
}