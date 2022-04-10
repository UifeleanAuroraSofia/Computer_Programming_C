/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care citeşte de la intrarea standard un număr întreg şi afişează 
numărul de zerouri din reprezentarea sa binară
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
using namespace std;

//Functie de contorizare a 0-urilor din reprezentarea binară a unui numar cu semn
void binar(int n, int& i);

int main()
{
	unsigned int a;
	int i;
	printf_s("Introduceti un numar fara semn: ");
	scanf_s("%d", &a);
	binar(a, i);
	printf_s("Numarul de 0-uri din scrierea binara a lui a este: %d", i);
	return 0;
}

void binar(int n, int& i)
{
	i = 0; //contor
	while (n)
	{
		if (n % 2 == 0)
		{
			i++; //contorizeaza numarul de 0-uri
		}
		n = n / 2;
	}
}