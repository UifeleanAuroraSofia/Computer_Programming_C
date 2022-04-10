/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care citeşte de la tastatură un caracter, pe care îl afişează pe n rânduri, 
câte n caractere pe un rând, n citit de la tastatura
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<conio.h>
using namespace std;

int numar_cifre(int n);

int main()
{
	int n, i = 0;
	char c;
	printf_s("Introduceti un caracter: ");
	scanf_s("%c", &c);
	printf_s("Introduceti un numar: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf_s("%c ", c);
		}
		printf_s("\n");
	}
	return 0;
}

