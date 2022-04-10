/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care defineşte două matrici de valori intregi. Dimensiunea si elementele
matricilor sunt citite de la tastatura
Se vor scrie functiile care:
a) afişează poziţiile elementelor pare din fiecare matrice;
b) afişează suma elementelor impare din ambele matrice;
c) afişează suma matricelor;
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define DIM 25

void citire_matrice(int a[][DIM], int n, int m);
void afisare_pozitii_el_pare(int a[][DIM], int n, int m);
void afisare_suma_el_impare(int a[][DIM], int n, int m, int &s);
void suma_matrici(int a[][DIM], int n, int m, int b[][DIM]);

int main()
{
    int a[DIM][DIM], b[DIM][DIM], n, m, x, y, S = 0;
    printf("\nIntroduceti dimensiunile primei matrici (numar linii si numar coloane): ");
    scanf("%d%d", &n, &m);
    if ((n < 1 || m < 1) || (n > 25 || m > 25))
    {
        printf("\nDate gresite!");
    }
    else
    {
        printf("\nIntroduceti elementele primei matrici: ");
        citire_matrice(a, n, m);
        printf("\nIntroduceti dimensiunile celei a doua matrici (numar linii si numar coloane): ");
        scanf("%d%d", &x, &y);
        if ((x < 1 || y < 1) || (x > 25 || y > 25))
        {
            printf("\nDate gresite!\n");
        }
        else
        {
            printf("\nIntroduceti elementele celei de a doua matrici: ");
            citire_matrice(b, x, y);
            printf("\nPozitiile pe care se afla elementele pare din prima matrice: \n");
            afisare_pozitii_el_pare(a, n, m);
            printf("\nPozitiile pe care se afla elementele pare din a doua matrice: \n");
            afisare_pozitii_el_pare(b, x, y);
            printf("\nSuma elementelor impare din ambele matrici: \n");
            afisare_suma_el_impare(a, n, m, S);
            afisare_suma_el_impare(b, x, y, S);
            if (n == x && m == y)
            {
                suma_matrici(a, n, m, b);
            }
            else
            {
                printf("\nCele doua matrici nu se pot aduna!\n");
            }
        }
    }
}

void citire_matrice(int a[][DIM], int n, int m) 
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void afisare_pozitii_el_pare(int a[][DIM], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                printf("pozitia: linia %d si coloana %d \n", i + 1, j + 1);
            }
        }
    }
}

void afisare_suma_el_impare(int a[][DIM], int n, int m, int &s)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 == 1)
            {
                s += a[i][j];
            }
        }
    }
}

void suma_matrici(int a[][DIM], int n, int m, int b[][DIM])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] += b[i][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}