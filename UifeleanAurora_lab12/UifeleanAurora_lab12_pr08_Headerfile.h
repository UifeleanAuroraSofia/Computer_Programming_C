#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

struct O_struct
{
	int numar_intreg;
	char caracter;
	char sir[256];
	void citire_prin_adresa(O_struct* p);
	void citire_prin_valoare(O_struct p);
	void afisare_prin_adresa(O_struct* p);
	void afisare_prin_valoare(O_struct p);
};

void citire_prin_adresa(O_struct* p)
{
	printf("\n\tNumar intreg: ");
	scanf("%d", &p->numar_intreg);
	printf("\tCaracter: ");
	cin.get();
	scanf("%c", &p->caracter);
	printf("\tSir de caractere: ");
	scanf("%s", p->sir);
}

void citire_prin_valoare(O_struct p)
{
	printf("\n\tNumar intreg: ");
	scanf("%d", &p.numar_intreg);
	printf("\tCaracter: ");
	cin.get();
	scanf("%c", &p.caracter);
	printf("\tSir de caractere: ");
	scanf("%s", p.sir);
}

void afisare_prin_adresa(O_struct* p)
{
	printf("\n\tNumar intreg: %d", p->numar_intreg);
	printf("\n\tCaracter: %c", p->caracter);
	printf("\n\tSir de caractere: %s", p->sir);
}

void afisare_prin_valoare(O_struct p)
{
	printf("\n\tNumar intreg: %d", p.numar_intreg);
	printf("\n\tCaracter: %c", p.caracter);
	printf("\n\tSir de caractere: %s", p.sir);
}