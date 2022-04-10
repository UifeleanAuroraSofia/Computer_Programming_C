/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru calcularea ariei unui triunghi oarecare cu ajutorul formulei lui Heron
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
using namespace std;

void arie_triunghi(int a, int b, int c);
int verificare_triunghi(int a, int b, int c);

int main()
{
	int a, b, c;
	printf_s("Introduceti lungimile laturilor unui triunghi oarecare: ");
	scanf_s("%d%d%d", &a, &b, &c);
	if (verificare_triunghi(a, b, c) == 1)
	{
		arie_triunghi(a, b, c);
	}
	else
	{
		printf_s("Numerele intregi nu pot forma un triunghi.");
	}
	return 0;
}

void arie_triunghi(int a, int b, int c)
{
	float p = (float)((a + b + c) / 2);
	float A = (float)sqrt(p * (p - a) * (p - b) * (p - c));
	printf_s("Aria triunghiului oarecare este: %f", A);
}

int verificare_triunghi(int a, int b, int c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}