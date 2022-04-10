/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru calcularea rezistentei in serie si in paralel a doua rezistente R1 si R2
(numere reale)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float rezistenta_serie(float a, float b);
float rezistenta_paralel(float a, float b);

int main()
{
    float R1, R2, RE;
    printf_s("Introduceti valorile a doua rezistente: ");
    scanf_s("%f%f", &R1, &R2);
    RE = rezistenta_serie(R1, R2);
    printf_s("Rezistenta echivalenta in serie: %10.*f\n", 3, RE);
    RE = rezistenta_paralel(R1, R2);
    printf_s("Rezistenta echivalenta in paralel: %10.*f", 3, RE);
    return 0;
}

float rezistenta_serie(float a, float b)
{
    return a + b;
}

float rezistenta_paralel(float a, float b)
{
    return (a * b) / (a + b);
}
