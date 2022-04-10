#include<stdio.h>

struct Student
{
	char nume[20];
	char prenume[20];
	char gen[2];
};

void citire(Student* p)
{
	printf("\n\tNume: ");
	scanf("%s", p->nume);
	printf("\tPrenume: ");
	scanf("%s", p->prenume);
	printf("\tGen (m sau f): ");
	scanf("%s", p->gen);
}