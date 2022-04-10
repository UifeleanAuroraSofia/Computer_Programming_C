/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Considerând algoritmul care preia numerele de la tastatură direct ordonate crescător
într-un tablou unidimensional, folosiţi mecanismul de acces la elemente prin poinetri.
Scrieţi o aplicaţie C/C++ care implementează o funcţie care are ca parametri formali
un pointer la un tablou unidimensional de tip float şi dimensiunea. (void dir_sort(float
*, int n);)
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

float* dir_sort(int n);

int main(void)
{
	int n = 0;
	printf("\nIntroduceti numarul de elemente ale tabloului unidimensional: ");
	scanf("%d", &n);
	float* v = dir_sort(n);
	return 0;
}

float* dir_sort(int n)
{
	float* a;
	a = new float[n];
	int i = 0, ok = 1;
	printf("\nIntroduceti %d de elemente de la tastatura: ", n);
	scanf("%f", (a + i));
	float mini = *(a + i);
	i++;
	do
	{
		scanf("%f", (a + i));
		if (*(a + i) < mini)
		{
			printf("Date gresite! Sirul nu este citit crescator!");
			break;
		}
		else
		{
			mini = *(a + i);
		}
		i++;
	} while (!(i >= n || *(a + i) >= mini));
	return a;
}