/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care defineşte o parolă (in format şir de caractere). Programul citeşte în
mod repetat şirurile de caractere introduse de la tastatură, 
până când utilizatorul scrie parola corectă.
Să se afişeze numărul de incercări până la introducerea parolei corecte.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define corect "Aurora_scrie_poezii16"

int main()
{
    char p[51];
    int gresit, k = 0;
    do {
        printf("Introduceti parola ");
        gets_s(p);
        gresit = strcmp("Aurora_scrie_poezii16", p);
        if (!gresit)
        {
            printf("Parola este corecta!\n");
        }
        else
        {
            printf("Parola NU este corecta\n");
        }
        k++;
    } while (gresit);
    printf("Numarul de incercari este: %d", k);
}