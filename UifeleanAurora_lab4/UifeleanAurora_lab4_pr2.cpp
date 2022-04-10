/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm de efectuare a mediei geometrice dintre 2 numere intregi
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b;
	float m;
	printf_s("Introduceti 2 numere intregi: ");
	scanf_s("%d%d", &a, &b);
	m = sqrt(a * b);
	printf_s("%f", m);
	return 0;
}