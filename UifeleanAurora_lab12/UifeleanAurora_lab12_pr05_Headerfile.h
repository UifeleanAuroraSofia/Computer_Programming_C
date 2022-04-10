#include<stdio.h>

struct Angajat
{
	char nume[20];
	char prenume[20];
	struct data_nasterii
	{
		int zi;
		int luna;
		int an;
	}data_n, data_a;
	long long cnp;
	void citire(Angajat*);
	void afisare(Angajat*);
};

void citire(Angajat* p)
{
	printf("\n\tNume: ");
	scanf("%s", p->nume);
	printf("\tPrenume: ");
	scanf("%s", p->prenume);
	printf("\tData nasterii: ");
	printf("\n\t\tZiua: ");
	scanf("%d", &p->data_n.zi);
	printf("\t\tLuna: ");
	scanf("%d", &p->data_n.luna);
	printf("\t\tAn: ");
	scanf("%d", &p->data_n.an);
	printf("\tCod numeric personal: ");
	scanf("%lld", &p->cnp);
	printf("\tData angajarii: ");
	printf("\n\t\tZiua: ");
	scanf("%d", &p->data_a.zi);
	printf("\t\tLuna: ");
	scanf("%d", &p->data_a.luna);
	printf("\t\tAn: ");
	scanf("%d", &p->data_a.an);
}

void afisare(Angajat* p)
{
	printf("\n\tNume: %s", p->nume);
	printf("\n\tPrenume: %s", p->prenume);
	printf("\n\tData nasterii: ");
	printf("\n\t\tZiua: %d", p->data_n.zi);
	printf("\n\t\tLuna: %d", p->data_n.luna);
	printf("\n\t\tAn: %d", p->data_n.an);
	printf("\n\tCod numeric personal: %lld", p->cnp);
	printf("\n\tData angajarii: ");
	printf("\n\t\tZiua: %d", p->data_a.zi);
	printf("\n\t\tLuna: %d", p->data_a.luna);
	printf("\n\t\tAn: %d", p->data_a.an);
}