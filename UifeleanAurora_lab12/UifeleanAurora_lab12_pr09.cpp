/*UifeleanAurora, ETTI, Seria A, Grupa 4
* Scrieti o aplicaţie C/C++, care alocă dinamic memorie pentru memorarea datelor a n
produse, folosind o structură Produs, cu câmpurile denumire, pret, cantitate, citeşte
datele pentru fiecare dintre produse si afişează produsul din care avem cel mai mult
pe stoc. În final va elibera memoria alocată.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<iostream>
#include<malloc.h>
#include "UifeleanAurora_lab12_pr09_Headerfile.h"

using namespace std;

int main()
{
	int n;
	Produs *produse;
	printf("\n\tIntroduceti numarul de produse: ");
	scanf("%d", &n);
	if ((produse = (Produs*)malloc(n * sizeof(Produs))))
	{
		printf("\n\tIntroduceti datele produselor.");
		for (int i = 0; i < n; i++)
		{
			printf("\n\tProdusul %d", i);
			citire(produse + i);
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	int maxim = (produse + 0)->cantitate;
	for (int i = 1; i < n; i++)
	{
		if ((produse + i)->cantitate >= maxim)
		{
			maxim = (produse + i)->cantitate;
		}
	}
	printf("\n\tProdusul/Produsele cu cea mai are cantitate pe stoc este/sunt: ");
	for (int i = 0; i < n; i++)
	{
		if ((produse + i)->cantitate == maxim)
		{
			afisare(produse + i);
		}
	}
	return 0;
}