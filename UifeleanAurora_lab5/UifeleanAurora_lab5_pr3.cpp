/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru calcularea ipotenuzei si perimetrului unui triunghi in functie de catete
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
using namespace std;

float ipotenuza(int a, int b);
float perimetrul(int a, int b);

int main()
{
    int C1, C2;
    float I, P;
    printf("Introduceti doua lungimi de catete: ");
    scanf("%d%d", &C1, &C2);
    I = ipotenuza(C1, C2);
    P = perimetrul(C1, C2);
    printf("Ipotenuza triunghiului este: %f\n", I);
    printf("Perimetrul triunghiului este: %f", P);
    return 0;
}

float ipotenuza(int a, int b)
{
    return sqrt((a * a) + (b * b));
}

float perimetrul(int a, int b)
{
    return ipotenuza(a, b) + a + b;
}
