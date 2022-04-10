#include<stdio.h>

union grup
{
	int numar_intreg;
	char sir_caractere[20];
	float numar_real;
};

struct grup_struct
{
	int numar_intreg;
	char sir_caractere[20];
	float numar_real;
};

void afisare_union_prin_adresa(grup* p)
{
	printf("\n\tNumar intreg: %d", p->numar_intreg);
	printf("\n\tSir de caractere: %s", p->sir_caractere);
	printf("\n\tNumar real: %.2f", p->numar_real);
}

void afisare_union_prin_valoare(grup p)
{
	printf("\n\tNumar intreg: %d", p.numar_intreg);
	printf("\n\tSir de caractere: %s", p.sir_caractere);
	printf("\n\tNumar real: %.2f", p.numar_real);
}

void afisare_struct_prin_adresa(grup_struct* p)
{
	printf("\n\tNumar intreg: %d", p->numar_intreg);
	printf("\n\tSir de caractere: %s", p->sir_caractere);
	printf("\n\tNumar real: %.2f", p->numar_real);
}

void afisare_struct_prin_valoare(grup_struct p)
{
	printf("\n\tNumar intreg: %d", p.numar_intreg);
	printf("\n\tSir de caractere: %s", p.sir_caractere);
	printf("\n\tNumar real: %.2f", p.numar_real);
}