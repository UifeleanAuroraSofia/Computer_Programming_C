/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru afisarea numelor si notelor unor studenti
(numere reale)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    float n1, n2;
    char s1[21], s2[21];
    printf_s("Introduceti numele primului student: ");
    scanf("%[^\n]%*c", s1);
    printf_s("Introduceti numele celui de al doilea student: ");
    scanf("%[^\n]s", s2);
    printf_s("Introduceti notele celor doi studenti: ");
    scanf_s("%f%f", &n1, &n2);
    float media = (n1 + n2) / 2;
    printf_s("Numele primului student este: %+-20s\n", s1);
    printf_s("Numele celui de al doilea student este: %+-20s\n", s2);
    printf_s("Media notelor celor doi studenti este: %-20.*f\n", 2, media);
    return 0;
}
