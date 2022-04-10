/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C/C++ care alocă dinamic memorie pentru "n" şiruri de
caractere, care se vor citi de la tastatură.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

char** citire(int &n);
void afisare(char** prop, int n);

#define dim 100

int main()
{
	int n;
	char** prop = citire(n);
	afisare(prop, n);
	return 0;
}

char** citire(int& n)
{
	char** prop;
	printf("\tIntroduceti numarul de propozitii: ");
	scanf("%d", &n);
	n++;
	prop = new char* [n];
	for (int i = 0; i < n; i++)
	{
		*(prop + i) = new char[dim];
	}
	for (int i = 0; i < n; i++)
	{
		gets_s(*(prop + i), dim);
	}
	return prop;
}

void afisare(char** prop, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\t%s\n", *(prop + i));
	}
}