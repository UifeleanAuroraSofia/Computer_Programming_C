/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru calcularea rezistentei si a capacitaii in serie si in paralel 
a doua rezistente R1 si R2, respectiv doua capacitati C1 si C2
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float rezistenta_serie(int a, int b);
float rezistenta_paralel(int a, int b);

float capacitate_serie(int a, int b);
float capacitate_paralel(int a, int b);

int main()
{
    int R1, R2, C1, C2;
    float RE, CE;
    printf_s("Introduceti valorile a doua rezistente: ");
    scanf_s("%d%d", &R1, &R2);
    printf_s("Introduceti valorile a doua capacitati: ");
    scanf_s("%d%d", &C1, &C2);
    RE = rezistenta_serie(R1, R2);
    printf_s("Rezistenta echivalenta in serie: %10.*f\n", 3, RE);
    RE = rezistenta_paralel(R1, R2);
    printf_s("Rezistenta echivalenta in paralel: %10.*f\n", 3, RE);
    CE = capacitate_serie(C1, C2);
    printf_s("Capacitatea echivalenta in serie: %-10.*f\n", 4, CE);
    CE = capacitate_paralel(C1, C2);
    printf_s("Capacitatea echivalenta in paralel: %-10.*f", 4, CE);
    return 0;
}

float rezistenta_serie(int a, int b)
{
    return a + b;
}

float rezistenta_paralel(int a, int b)
{
    return (float)(a * b) / (a + b);
}

float capacitate_serie(int a, int b)
{
    return (float)(a * b) / (a + b);
}

float capacitate_paralel(int a, int b)
{
    return a + b;
}