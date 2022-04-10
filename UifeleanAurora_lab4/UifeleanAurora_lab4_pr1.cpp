/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm de efectuare a mediei aritmetice dintre 3 numere neintregi
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
    float a, b, c, m;
    printf_s("Introduceti 3 numere reale: ");
    scanf_s("%f%f%f", &a, &b, &c);
    m = (a + b + c) / 3.0f;
    printf("%f", m);
    return 0;
}
