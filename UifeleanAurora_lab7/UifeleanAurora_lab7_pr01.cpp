/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care determina aria dreptunghiului ale cărui laturi
sunt a şi b şi verifica dacă diagonala dreptunghiului este egală cu c
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
using namespace std;
int main()
{
	float a, b, c;
	printf_s("Introduceti 3 numere reale: ");
	scanf_s("%f%f%f", &a, &b, &c);
	printf_s("Aria dreptunghiului format din laturile %f si %f este: %f", a, b, a * b);
	if (c * c == a * a + b * b)
	{
		printf_s("\nDiagonala dreptunghiului este egala cu cel de al treilea numar, adica %f", c);
	}
	else
	{
		printf_s("\nDiagonala dreptunghiului nu este egala cu cel de al treilea numar, adica %f", c);
	}
	return 0;
}