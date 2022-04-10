/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care citeşte de la tastatura două siruri de caractere reprezentand numele si
prenumele unei persoane. Afiseaza cu majuscula, separate prin două spatii de tabulare
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void transformare_majuscula(char s[]);

int main()
{
    char nume[21], prenume[21];
    printf("Numele persoanei este: ");
    gets_s(nume);
    printf("Prenumele persoanei este: ");
    gets_s(prenume);
    transformare_majuscula(nume);
    transformare_majuscula(prenume);
    printf("Numele si prenumele persoanei sunt: %s\t\t%s", nume, prenume);
    return 0;
}

void transformare_majuscula(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
}