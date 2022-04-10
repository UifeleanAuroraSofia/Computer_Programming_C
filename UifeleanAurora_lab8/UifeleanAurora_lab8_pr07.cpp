/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Citiţi de la tastatura elementele unei matrice cu elemente de tip float, cu dimensiunea 3x3.
Rearanjaţi coloanele matricei astfel ca suma elementelor de pe o anumită coloană sa fie 
mai mica decat suma elementelor de pe coloana următoare.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define DIM 25

float suma_coloana(float a[][DIM], int j);
void citire_matrice(float a[][DIM]);
void schimbare_coloane(float a[][DIM], float sume[], int i);
void afisare_matrice(float a[][DIM]);

int main()
{
    float a[DIM][DIM], sume[4] = { 0 };
    int i;
    printf("\nIntroduceti elementele primei matrici: ");
    citire_matrice(a);
    for (int j = 0; j < 3; j++)
    {
        sume[j] = suma_coloana(a, j);
    }
    printf("\nIntroduceti coloana pe care sa fie suma mai mica urmata de o suma mai mare: ");
    scanf("%d", &i);
    schimbare_coloane(a, sume, i);
    afisare_matrice(a);
	return 0;
}

void citire_matrice(float a[][DIM])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

float suma_coloana(float a[][DIM], int j)
{
	float s = 0;
	for (int i = 0; i < 3; i++)
	{
		s += a[i][j];
	}
	return s;
}

void schimbare_coloane(float a[][DIM], float sume[], int i)
{
    i--;
    if (i < 2 && sume[i] > sume[i + 1])
    {
        for (int k = 0; k < 3; k++)
        {
            float aux = a[k][i];
            a[k][i] = a[k][i + 1];
            a[k][i + 1] = aux;
        }
    }
    else
    {
        printf("Aceasta coloana este urmata de o coloana care are suma elemtelor mau mare decat coloana actuala");
    }
}

void afisare_matrice(float a[][DIM])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }
}
