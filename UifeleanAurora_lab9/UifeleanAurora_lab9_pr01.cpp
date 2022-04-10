/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program C/C++ care citeşte elementele a doua tablouri unidimensionale de numere
întregi şi afişează produsul scalar al acestora. Se va folosi o functie care preia elementele de la
tastatură şi o altă funcţie, care calculează produsul scalar. Ambele vor utiliza pointeri. Citirea
numărului de elemente ale tabloului şi afişarea rezultatului se va face în funcţia main().

*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>

#define DIM 20

void citire(int a[], int n);
int produs_scalar(int a[], int b[], int n);

int main()
{
	int n, m, a[DIM], b[DIM];
	do
	{
		printf("Cititi doua valori intregi de la tastatura mai mici decat 20 care reprezinta numarul de elemente a doua tablouri unidimensionale: ");
		scanf("%d%d", &n, &m);
		if (n >= 20 || m >= 20)
		{
			printf("Numere introduse nu sunt valide!\n");
		}
	} while (n >= 20 || m >= 20);
	citire(a, n);
	citire(b, m);
	if (m < n)
	{
		n = m;
	}
	printf("\nProdusul scalar al celor doua tablouri unidimensionale este : %d", produs_scalar(a, b, n));
}

void citire(int a[DIM], int n)
{
	printf("Cititi %d numere intregi: ", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", a + i);
	}
}

int produs_scalar(int a[], int b[], int n)
{
	int* p = &a[0], * q = &b[0];
	long long s = 0;
	for (int i = 0; i < n; i++, p++, q++)
	{
		s = s + *p * *q;
	}
	return s;
}