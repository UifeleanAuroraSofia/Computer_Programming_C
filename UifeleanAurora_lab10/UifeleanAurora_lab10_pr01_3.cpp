/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care citeşte de la tastatură un tablou de 10 valori intregi. Defineste o funcţie
care primeste tabloul ca parametru şi apoi îl afişeaza ordonat crescător
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void afisare(int a[10]);

int main()
{
    int v[10];
    bool sortat;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (v + i));
    }
    do
    {
        sortat = true;
        for (int i = 0; i < 9; i++)
            if (*(v + i) > *(v + i + 1))
            {
                int aux = v[i];
                *(v + i) = *(v + i + 1);
                *(v + i + 1) = aux;
                sortat = false;
            }
    } while (!sortat);
    afisare(v);
}

void afisare(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(a + i));
    }
}