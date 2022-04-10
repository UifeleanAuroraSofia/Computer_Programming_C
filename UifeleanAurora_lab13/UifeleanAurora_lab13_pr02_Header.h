#pragma once/*Uifelean Aurora Sofia, ETTI, Seria A, Grupa 4
* Să se scrie un program care citeşte dintr-un fişier text 10 numere întregi (generat in
prealabil prin program sau extern). Să se scrie funcţiile care:
a. aranjează crescător/descrescator şirul si afiseaza rezultatul;
b. numără câte elemente sunt pare si afiseaza rezultatul.
Adăugați în fișierul original noile rezultate obținute
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define dim 20

FILE* creare_si_verificare_fisier();
int* citire_din_fisier(FILE* fps);
void afisare_in_fisier(int* nr, FILE* fps);
int* sortare(int* nr);
void numar_pare(int* nr, FILE* fps);

FILE* creare_si_verificare_fisier() //sa te uiti la exemplul 6 - F6
{
	FILE* fps;
	char nume_fisier[dim], numele[dim] = "fisier2.txt";
	do
	{
		printf("\n\tNumele fisierului (!max.10 car.)<Enter>: ");
		gets_s(nume_fisier, _countof(nume_fisier));
		if (_stricmp(numele, nume_fisier) != 0)
		{
			printf("\n\tNume incorect! Mai incearca!");
		}
	} while (_stricmp(numele, nume_fisier));
	errno_t err;
	err = fopen_s(&fps, nume_fisier, "r+");
	// Efect mod de acces w+b: daca exista un fis. cu acest nume, va fi suprascris
	if (err != 0) {
		puts("\n\tN-am putut deschide fisierul.");
		exit(1);
	}
	else {
		return fps;
	}
}

int* citire_din_fisier(FILE* fps)
{
	int* nr;
	if ((nr = (int*)malloc(10 * sizeof(int))))
	{
		for (int i = 0; i < 10; i++)
		{
			fscanf(fps, "%d", nr + i);
		}
	}
	return nr;
}

void afisare_in_fisier(int* nr, FILE* fps)
{
	fprintf(fps, "\n\tNumerele sunt: ");
	for (int i = 0; i < 10; i++)
	{
		fprintf(fps, "%d ", *(nr + i));
	}
	numar_pare(nr, fps);
}

int* sortare(int* nr)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (*(nr + i) > *(nr + j))
			{
				int aux;
				aux = *(nr + i);
				*(nr + i) = *(nr + j);
				*(nr + j) = aux;
			}
		}
	}
	return nr;
}

void numar_pare(int* nr, FILE* fps)
{
	int k = 0;
	for (int i = 0; i < 10; i++)
	{
		if (*(nr + i) % 2 == 0)
		{
			k++;
		}
	}
	fprintf(fps, "\n\tNumarul de numere pare este: %d", k);
}