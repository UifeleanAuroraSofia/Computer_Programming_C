/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care citeşte de la tastatură o valoare întreagă n şi calculează n! (n-factorial)
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
	int n, aux;
	long long p = 1;
	printf_s("Introduceti un numar: ");
	scanf_s("%d", &n);
	aux = n;
	while (n)
	{
		p = p * n;
		n--;
	}
	printf_s("Numarul %d! este egal cu: %d", aux, p);
	return 0;
}