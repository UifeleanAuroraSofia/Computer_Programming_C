/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care efectueaza operatii cu doua numere reale, valorile finale fiind rotunjite
Să se afișeze apoi valoarea minimă dintre numerele citite folosind operatorul condițional
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	float a, b;
	printf_s("Introduceti doua numere reale: ");
	scanf_s("%f%f", &a, &b);
	printf_s("a + b = %f\n", a + b);
	printf_s("a - b = %f\n", a - b);
	printf_s("a * b = %f\n", a * b);
	printf_s("a / b = %f\n", a / b);
	printf_s("\nRezultatele rotunjite sunt: \n");
	printf_s("a + b = %d\n", (int)(a + b));
	printf_s("a - b = %d\n", (int)(a - b));
	printf_s("a * b = %d\n", (int)(a * b));
	printf_s("a / b = %d\n", (int)(a / b));
	float min = (a < b) ? a : b;
	printf_s("\nValoarea minima dintre a si b este: %f\n", min);
	return 0;
}

