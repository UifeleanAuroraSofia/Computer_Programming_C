/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program C/C++ în care se citesc de la tastatură numere reale, ce vor fi stocate într-un
tablou unidimensional. Să se scrie o funcţie care copiază într-un alt tablou toate valorile din primul
tablou, care sunt mai mari decât valoarea medie a numerelor preluate. Se vor folosi pointeri şi se vor
afişa în main() valorile din cele două tablouri.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

#define DIM 50

void citire(float a[], float &media, int &n);
void copiere(float a[], float b[], float& media, int &n);
void afisare_tablou(float a[], int n);

int main()
{
	float a[DIM], b[DIM], media = 0;
	int n;
	citire(a, media, n);
	printf("\n%f\n", media);
	printf("\nElementele tabloului sunt: \n");
	afisare_tablou(a, n);
	copiere(a, b, media, n);
	printf("\nElementele tabloului sunt: \n");
	afisare_tablou(b, n);
	return 0;
}

void citire(float a[], float &media, int& n)
{
	int i = 0;
	char c;
	bool ok = true;
	media = 0;
	do
	{
		printf("Introduceti o valoare reala de la tastatura: ");
		scanf("%f", a + i);
		media = media + *(a + i);
		scanf("%c", &c);
		printf("Continuati? Apasati d pentru DA si altceva pentru NU: ");
		scanf("%c", &c);
		if (c == 'd')
		{
			ok = true;
		}
		else
		{
			ok = false;
		}
		i++;
	} while (ok == true);
	media = media / i;
	n = i;
}

void copiere(float a[], float b[], float& media, int& n)
{
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) > media)
		{
			*(b + j) = *(a + i);
			j++;
		}
	}
	n = j;
}

void afisare_tablou(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%f ", *(a + i));
	}
}