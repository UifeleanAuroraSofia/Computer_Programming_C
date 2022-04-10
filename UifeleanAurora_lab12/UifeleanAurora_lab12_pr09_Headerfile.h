#include<stdio.h>

struct Produs
{
char denumire[20];
float pret;
int cantitate;
void citire(Produs*);
void afisare(Produs*);
};

void citire(Produs* p)
{
	printf("\n\tDenumire produs: ");
	scanf("%s", p->denumire);
	printf("\tPret: ");
	scanf("%f", &p->pret);
	printf("\tCantitate: ");
	scanf("%d", &p->cantitate);
}
void afisare(Produs* p)
{
	printf("\n\tDenumire produs: %s", p->denumire);
	printf("\n\tPret: %.2f", p->pret);
	printf("\n\tCantitate: %d", p->cantitate);
}
