/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care citeste de la tastatura 2 numere întregi. Dacă sunt egale, 
determina aria cercului cu raza egală cu valoarea citită, 
iar dacă sunt diferite calculeaza aria dreptunghiului cu laturile egale cu valorile date
*/

#define _CRT_SECURE_NO_WARNING

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include<stdio.h>
#include <math.h>	
using namespace std;

int main()
{
	int a, b;
	printf_s("Introduceti doua numere intregi: ");
	scanf_s("%d%d", &a, &b);
	if (a == b)
	{
		printf_s("Aria cercului de raza %d este: %f", a, (float)M_PI * a * a);
	}
	else
	{
		printf_s("Aria dreptunghiului cu laturile de lungime %d si %d este: %d", a, b, a * b);
	}
	return 0;
}