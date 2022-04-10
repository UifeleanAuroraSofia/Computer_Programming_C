/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Pornind de la exemplul 5 în care se arată modul de parcurgere a unei matrice tridimensionale din
perspectiva xOy, să se scrie un program care face parcurgerea matricei considerând perspectiva xOz
și yOz. Afișați datele precizând din ce perspectivă au fost parcurse.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#define Max1 3 //planuri
#define Max2 2 //linii
#define Max3 4 //coloane
int main() {
	int i, j, k;
	double arr[Max1][Max2][Max3] = {
	{{-0.1, 0.22, 0.3, 4.3}, {2.3, 4.7, -0.9, 2}},
	{{0.9, 3.6, 4.5, 4}, {1.2, 2.4, 0.22, -1}},
	{{8.2, 3.12, 34.2, 0.1}, {2.1, 3.2, 4.3, -2.0}}
	};
	printf("Perspectiva xOy:\n\n");
	for (i = 0; i < Max1; i++)
	{
		for (j = 0; j < Max2; j++)
		{
			for (k = 0; k < Max3; k++)
			{
				printf("%6.2lf\t", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\n\nPerspectiva xOz:\n\n");
	for (j = 0; j < Max2; j++)
	{
		for (i = 0; i < Max1; i++)
		{
			for (k = 0; k < Max3; k++)
			{
				printf("%6.2lf\t", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\n\nPerspectiva yOz:\n\n");
	for (k = 0; k < Max3; k++)
	{
		for (j = 0; j < Max2; j++)
		{
			for (i = 0; i < Max1; i++)
			{
				printf("%6.2lf\t", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
