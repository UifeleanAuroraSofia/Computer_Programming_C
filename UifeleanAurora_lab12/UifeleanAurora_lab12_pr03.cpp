/*UifeleanAurora, ETTI, Seria A, Grupa 4
Să se scrie un program C/C++, în care o funcţie returnează o structură de date
adecvată. În acest fel vor fi returnate mai multe valori. Afişaţi rezultatul, valorile
iniţiale transferate funcţiei (puteţi realiza orice operaţie în cadrul acelei funcţii), cu
mesaje adecvate.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include "UifeleanAurora_lab12_pr03_Headerfile.h"

Crema* citire_creme(int& n);
Crema* reduceri_creme(Crema* tab, int n);
void afisare_creme(Crema* tab, int n);

int main()
{
	int n = 0;
	Crema* creme = citire_creme(n);
	printf("\n\tDatele despre creme: ");
	afisare_creme(creme, n);
	creme = reduceri_creme(creme, n);
	printf("\n\tDatele despre creme dupa introducerea reducerii: ");
	afisare_creme(creme, n);
	free(creme);
}

Crema* citire_creme(int& n)
{
	Crema* tab;
	printf("\n\tIntroduceti numarul de creme: ");
	scanf("%d", &n);
	if ((tab = (Crema*)malloc(n * sizeof(Crema))))
	{
		printf("\n\tIntroduceti datele a %d creme", n);
		for (int i = 0; i < n; i++)
		{
			printf("\n\tCrema numarul %d", i);
			citire(tab + i);
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	return tab;
}

Crema* reduceri_creme(Crema* tab, int n)
{
	float reducere;
	printf("\n\tIntroduceti reducerea produselor (ex. pentru 50 la suta se va introduce 50: ");
	scanf("%f", &reducere);
	for (int i = 0; i < n; i++)
	{
		(tab + i)->pret = (tab + i)->pret - (float)((tab + i)->pret * reducere / 100);
	}
	return tab;
}

void afisare_creme(Crema* tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		afisare(tab + i);
	}
}