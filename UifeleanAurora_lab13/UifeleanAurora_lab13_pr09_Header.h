/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Să se scrie o aplicaţie care:
- citeşte de la consolă un numar întreg n;
- citeşte de la consolă, cu o funcţie, “n” numere reale, într-un tablou unidimensional,
alocat dinamic în memorie;
- scrie aceste valori din tablou într-un fişier binar, al cărui nume este citit tot de la
consolă;
- citeşte apoi conţinutul fişierului şi afişează numerele din 3 în 3 poziţii, folosind funcţii
specifice accesului aleator la fişiere.
*/

#define _CRT_SECURE_NO_WARNINGS	

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define dim 20

FILE* creare_si_verificare_fisier();
float* citire_de_la_tastatura(int& n);
void afisare_in_fisier(FILE* f, float* tab, int &n);
void citeste_din_fisier_si_afiseaza_in_fisier(FILE* f, float* tab, int &n);

FILE* creare_si_verificare_fisier()
{
	FILE* f;
	char nume_fis[dim] = "fisier9.txt", nume[dim];
	do
	{
		printf("\n\tIntroduceti numele fisierului: ");
		gets_s(nume, _countof(nume));
		if ((_stricmp(nume_fis, nume)) != 0)
		{
			printf("\n\tNume gresit! Mai incearca!");
		}
	} while ((_stricmp(nume_fis, nume)));
	errno_t err;
	err = fopen_s(&f, nume, "w+b");
	if (err != 0)
	{
		printf("\n\tCreare fisier nereusita!");
		exit(1);
	}
	else
	{
		return f;
	}
}

float* citire_de_la_tastatura(int& n)
{
	float* tab;
	printf("\n\tIntroduceti numarul de numere reale: ");
	scanf("%d", &n);
	if ((tab = (float*)malloc(n * sizeof(float))))
	{
		printf("\n\tIntroduceti cele %d numere: ", n);
		for (int i = 0; i < n; i++)
		{
			scanf("%f", tab + i);
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	return tab;
}

void afisare_in_fisier(FILE* f, float* tab, int& n)
{
	for (int i = 0; i < n; i++)
	{
		fprintf(f, "%.2f ", *(tab + i));
	}
}

void citeste_din_fisier_si_afiseaza_in_fisier(FILE* f, float* tab, int &n)
{
	int i = 0;
	float* uab = (float*)malloc(((n / 3) + 1) * sizeof(float));
	char c;
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%f", tab + i);
	}
	int poz = fseek(f, 0L, SEEK_SET);
	fprintf(f, "\n\tNumerele reale sunt (afisate din 3 in 3 pozitii): ");
	while ((c = fgetc(f)) != EOF)
	{
		fprintf(f, "%.2f ", *(tab + i));
		poz = fseek(f, 3, poz);
		i++;
	}
	n = i;
}