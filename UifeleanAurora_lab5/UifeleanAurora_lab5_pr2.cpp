/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru calcularea capacitatii in serie si in paralel a doua capacitati C1 si C2
(numere reale)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float capacitate_serie(float a, float b);
float capacitate_paralel(float a, float b);

int main()
{
    float C1, C2, CE;
    printf_s("Introduceti valorile a doua rezistente: ");
    scanf_s("%f%f", &C1, &C2);
    CE = capacitate_serie(C1, C2);
    printf_s("Capacitatea echivalenta in serie: %-10.*f\n", 4, CE);
    CE = capacitate_paralel(C1, C2);
    printf_s("Capacitatea echivalenta in paralel: %-10.*f", 4, CE);
    return 0;
}

float capacitate_serie(float a, float b)
{
    return (a * b) / (a + b);
}

float capacitate_paralel(float a, float b)
{
    return a + b;
}