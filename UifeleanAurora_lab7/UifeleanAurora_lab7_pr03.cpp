/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care calculeaza a la puterea nprin inmultiri repetate, 
unde n este citit de la consolă (a se defineşte în program)
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
using namespace std;

#define a 2

int main()
{
	int n, aux;
	long long p = 1;
	printf_s("Introduceti un numar n care reprezinta puterea numarului %d: ", a);
	scanf_s("%d", &n);
	aux = n;
	while (n)
	{
		p = p * a;
		n--;
	}
	printf_s("%d la puterea %d este egal cu: %d", a, aux, p);
	return 0;
}