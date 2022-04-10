/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Scrieţi un program C/C++ care citeşte de la tastatură valori reale în format float, cu
confirmare. Valorile citite vor fi scrise într-un fişier text cu numele citit din linia de
comandă. Citiţi apoi fişierul şi afişati valorile mai mari decât o valoare dată, citită de la
tastatură.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#include<iostream>

using namespace std;

#define dim 20
#define dimensiune 200

FILE* creare_si_verificare_fisier();
float* citire_de_la_tastatura(FILE* f, int &i, float &val);
void afisare_in_fisier(FILE* f, float* nr, int n, float val);


FILE* creare_si_verificare_fisier(int argc, char* argv[])
{
	FILE* f;
	errno_t err;
	err = fopen_s(&f, argv[1], "w+");
	if (err != 0)
	{
		puts("\n\tEroare la deschiderea fisierului!");
	}
	else
	{
		return f;
	}
}

float* citire_de_la_tastatura(FILE* f, int &i, float &val)
{
	i = 0;
	char c;
	float* nr = (float*)malloc(dimensiune * sizeof(float));
	printf("\n\tCititi o valoare reala: ");
	scanf("%f", nr + i);
	i++;
	do
	{
		printf("\n\tDoriti sa mai cititi numere? (d/n): ");
		cin.get();
		scanf("%c", &c);
		if (c == 'd')
		{
			printf("\n\tCititi urmatorul numar real: ");
			scanf("%f", nr + i);
			i++;
		}
	} while (c != 'n');
	printf("\n\tNumerele afisate in fisier vreau sa fie mai mari decat valoarea: ");
	scanf("%f", &val);
	return nr;
}

void afisare_in_fisier(FILE* f, float* nr, int n, float val)
{
	fprintf(f, "\n\tNumerele mai mari decat valoarea %.2f sunt: ", val);
	for (int i = 0; i < n; i++)
	{
		if (*(nr + i) >= val)
		{
			fprintf(f, "%.2f ", *(nr + i));
		}
	}
}