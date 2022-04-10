/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi un program care citeşte de la tastatură elementele de tip float ale unui tablou
unidimensional, elemente ce reprezintă mediile unei grupe de studenţi. Să se scrie o
funcţie care determină numărul studenţilor cu media >= 8. Afişaţi rezultatul în main.
(lucrati cu pointeri, fără variabile globale).
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

float *citire(int &n);
int comparare(float* v, int& n);

int main()
{
	int n = 0;
	float* v = citire(n);
	printf("\nNumarul de medii flotante mai mari sau egale cu 8 este: %d", comparare(v, n));
	return 0;
}


float *citire(int& n)
{
	float* a;
	printf("\nIntroduceti numarul de medii flotante ale studentilor: ");
	scanf("%d", &n);
	a = new float[n];
	printf("\nIntroduceti mediile flotante ale studentilor: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%f", (a + i));
	}
	return a;
}

int comparare(float* v, int& n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(v + i) >= 8)
		{
			k++;
		}
	}
	return k;
}