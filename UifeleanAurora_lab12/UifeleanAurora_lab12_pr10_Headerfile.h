#include<stdio.h>

struct Masina
{
	char producator[20];
	int anul_fabricatiei;
	float capacitatea_cilindrica;
	char culoare[20];
};

void citire(Masina* p)
{
	printf("\n\tProducator: ");
	scanf("%s", p->producator);
	printf("\tAnul fabricatiei: ");
	scanf("%d", &p->anul_fabricatiei);
	printf("\tCapacitatea cilindrica: ");
	scanf("%f", &p->capacitatea_cilindrica);
	printf("\tCuloare: ");
	scanf("%s", p->culoare);
}

void afisare(Masina* p)
{
	printf("\n\tProducator: %s", p->producator);
	printf("\n\tAnul fabricatiei: %d", p->anul_fabricatiei);
	printf("\n\tCapacitatea cilindrica: %.2f", p->capacitatea_cilindrica);
	printf("\n\tCuloare: %s", p->culoare);
}