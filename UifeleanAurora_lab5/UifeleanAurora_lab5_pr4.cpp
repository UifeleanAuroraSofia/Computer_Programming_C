/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru rezolvarea unei ecuatii de gradul I stiind coeficientii a si b
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    float x;
    printf("Introduceti coeficientii unei ecuatii de gradul I in aceasta ordine, a si b: ");
    scanf("%d%d", &a, &b);
    x = (float)-b / a;
    printf("Rezultatul ecuatiei de gradul I este: %f", x);
    return 0;
}
