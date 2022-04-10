/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program de efectuare a sumei ponderate dintre 3 numere intregi cu ponderi numere reale
a caror suma este 1
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	float p1, p2, p3, S;
	printf_s("Introduceti 3 numere intregi, fiecare urmate de ponderile acestora ");
	scanf_s("%d%f%d%f%d%f", &a, &p1, &b, &p2, &c, &p3);
	S = a * p1 + b * p2 + c * p3;
	printf_s("Suma ponderata a celor 3 numere este %f", S);
	return 0;
}