/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Generați un tablou de pointeri către șiruri constante folosind funcția strdup( ) sau o
altă funcție specifică. Afișați valorile pare din tablou.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<malloc.h>

char** alocare();
void afisare(char** prop);

#define dim 5

int main()
{
	char** prop = alocare();
	afisare(prop);
	free(prop);
	return 0;
}

char** alocare()
{
	const char* prop[dim] = { "pe","25","este","Craciun","!!!" };
	char **prop2;
	int n = strlen(*prop);
	prop2 = (char**)malloc((n + 1) * sizeof(char*));
	for (int i = 0; i < 5; i++)
	{
		*(prop2 + i) = _strdup(*(prop + i));
	}
	if (prop2 == NULL)
	{
		printf("\n\tAlocare nereusita!");
	}
	return prop2;
}

void afisare(char** prop)
{
	printf("\n\tSirul alocat dinamic este: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%s ", *(prop + i));
	}
}