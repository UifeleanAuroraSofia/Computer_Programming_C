#include<stdio.h>

struct Crema
{
	char firma[20];
	char miros[20];
	char culoare[20];
	int cantitate;
	float pret;
	void citire(Crema*);
	void afisare(Crema*);
};

void citire(Crema* p)
{
	printf("\n\tFirma: ");
	scanf("%s", p->firma);
	printf("\tMiros: ");
	scanf("%s", p->miros);
	printf("\tCuloare: ");
	scanf("%s", p->culoare);
	printf("\tCantitate: ");
	scanf("%d", &p->cantitate);
	printf("\tPret: ");
	scanf("%f", &p->pret);

}

void afisare(Crema* p)
{
	printf("\n\tFirma: %s", p->firma);
	printf("\n\tMiros: %s", p->miros);
	printf("\n\tCuloare: %s", p->culoare);
	printf("\n\tCantitate: %d", p->cantitate);
	printf("\n\tPret: %.2f", p->pret);
}