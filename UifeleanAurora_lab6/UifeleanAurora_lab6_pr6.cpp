/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care  afișeaza în format zecimal valoarea fiecărui octet al întregului citit
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

//functie de transformare al unui numar fara semn din forma zecimala in forma binara
void binar(int n, int v[], int& t);

//afisarea formatului unui numar intr-o baza strict mai mica decat 10
void afisare_intregi(int v[], int t);

int main()
{
	unsigned int a;
	int v[64] = { 0 }, t = 16, p, n, i = 0;
	printf_s("Introduceti un numar intreg fara semn: ");
	scanf_s("%d", &a);
	printf_s("\nValoarea lui a in binar este: ");
	binar(a, v, t);
	afisare_intregi(v, t);
	return 0;
}

void binar(int n, int v[], int& t)
{
	int i = 0; //numarul total de biti
	while (n)
	{
		if (n % 2 == 0)
		{
			v[i] = 0; //bitul 0 daca nu avem rest
		}
		else
		{
			v[i] = 1; //bitul 1 daca avem rest
		}
		n = n / 2;
		i++;
	}
	if (i <= 16) //16 biti
	{
		t = 16;
	}
	else if (i > 16 && i <= 32) //32 biti
	{
		t = 32;
	}
	else if (i > 32 && i <= 64) //64 biti
	{
		t = 64;
	}
}

void afisare_intregi(int v[], int t)
{
	int aux, j = t - 1;
	for (int i = 0; i < t / 2; i++)
		//parcurgere pana la jumatatea bitilor si interschimbarea elementelor
	{
		aux = v[i];
		v[i] = v[j];
		v[j] = aux;
		j--;
	}
	for (int i = 0; i < t; i++)
	{
		printf_s("%d", v[i]); //afisare bit cu bit
	}
	printf_s("\n");
	int k = 1, nr = 0, p = 7, l = 1;
	for (int i = 0; i < t; i++)
	{
		if (k <= 8) //parcurgerea octetilor de la stanga la dreapta
		{
			if (v[i] == 1)
			{
				nr = nr + pow(2, p); //crearea numarului intreg 
			}
			k++;
			p--;
		}
		if (k == 9)
		{
			printf_s("Numarul %d este: %d \n", l, nr); //afisarea numarului intreg
			nr = 0;
			k = 1;
			p = 7;
			l++;
		}
	}
}