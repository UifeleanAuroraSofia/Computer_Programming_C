#include<stdio.h>

struct Pisici
{
	char nume[20];
	char culoare[20];
	char gen[20];
	int greutate;
	void citire(Pisici*);
	void afisare_prin_valoare(Pisici);
	void afisare_prin_adresa(Pisici*);
};

void citire(Pisici* p)
{
	printf("\n\tNume pisica: ");
	scanf("%s", p->nume);
	printf("\tCuloare: ");
	scanf("%s", p->culoare);
	printf("\tGen: ");
	scanf("%s", p->gen);
	printf("\tGreutate: ");
	scanf("%d", &p->greutate);
}

void afisare_prin_valoare(Pisici p)
{
	printf("\n\tNume pisica: %s", p.nume);
	printf("\n\tCuloare: %s", p.culoare);
	printf("\n\tGen: %s", p.gen);
	printf("\n\tGreutate: %d", p.greutate);
}

void afisare_prin_adresa(Pisici* p)
{
	printf("\n\tNume pisica: %s", p->nume);
	printf("\n\tCuloare: %s", p->culoare);
	printf("\n\tGen: %s", p->gen);
	printf("\n\tGreutate: %d", p->greutate);
}
