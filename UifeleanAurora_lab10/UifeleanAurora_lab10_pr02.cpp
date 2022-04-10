/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Se consideră doi parametri întregi şi alţi doi flotanţi din linia de comandă. Să se
afişeze suma şi produsul lor.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	float suma = 0.0f, produsul = 1.0f;
	if (argc == 1)
	{
		printf("\nNu ati introdus numere intregi si flotante!");
	}
	for (int i = 1; i < argc; i++)
	{
		if (i >= 3)
		{
			suma = suma + atof(*(argv + i));
			produsul = produsul * atof(*(argv + i));
		}
		else
		{
			suma = suma + atoi(*(argv + i));
			produsul = produsul * atoi(*(argv + i));
		}
	}
	printf("\nSuma numerelor introduse de la linia de comanda este: %f\n", suma);
	printf("\nProdusul numerelor introduse de la linia de comanda este: %f\n", produsul);
	return 0;
}