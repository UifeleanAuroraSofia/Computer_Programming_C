/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieți o aplicație C/C ++ care citește de la tastatură un tablou de până la 10 numere
întregi valori în intervalul 2, ..., 10. Dimensiunea reală este introdusă de la tastatură,
tabloul fiind alocat dinamic. Definiți două funcții care consideră tabloul ca parametru
și returnează valorile minime și maxime din tablou. Definiți o altă funcție care
returnează valoarea medie a elementelor introduse in tablou.
Definiți o altă funcție, olympic_filter(...), care consideră tabloul inițial, returnând
adresa unui tablou alocat dinamic fără prima apariție a valorii minime și maxime
ordonate crescator.
În main( ) se afișează, de asemenea, tablou inițial, valoarea minimă și maximă, media
elementelor tabloului inițial, elementele tabloului nou obținute de funcția
olympic_filter(... ) si media obținută dupa aplicarea filtrului olimpic.
Validați introducerea datelor în conformitate cu cerințele problemei (dimensiunea
tabloului, elementele introduse cu reluare). Operațiile cu elementele tablourilor se vor
face folosind pointeri.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>

#define dim 10

int* citire(int& n);
int minim(int* tab, int n);
int maxim(int* tab, int n);
float medie(int* tab, int n);
int *olympic_filter(int *tab, int &n);
void afisare(int* tab, int n);

int main()
{
	int n = 0, * tab = citire(n);
	if (tab)
	{
		afisare(tab, n);
		printf("\n\tValoarea minima a tabloului este: %d", minim(tab, n));
		printf("\n\tValoarea maxima a tabloului este: %d", maxim(tab, n));
		printf("\n\tValoarea medie a tabloului este: %.2f\n", medie(tab, n));
		int* tab2 = olympic_filter(tab, n);
		afisare(tab2, n);
		printf("\n\tValoarea medie a tabloului este: %.2f\n", medie(tab2, n));
	}
}

int* citire(int& n)
{
	int* tab = NULL;
	printf("\n\tIntroduceti numarul de numere intregi (maxim 10): ");
	scanf("%d", &n);
	if (n <= 10 && (tab = (int*)malloc(n * sizeof(int))) != NULL)
	{
		printf("\n\tIntroduceti cele %d elemente: ", n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", tab + i);
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
		return NULL;
	}
	return tab;
}

int minim(int* tab, int n)
{
	int mini = 10;
	for (int i = 0; i < n; i++)
	{
		if (*(tab + i) <= mini)
		{
			mini = *(tab + i);
		}
	}
	return mini;
}

int maxim(int* tab, int n)
{
	int maxi = 2;
	for (int i = 0; i < n; i++)
	{
		if (*(tab + i) >= maxi)
		{
			maxi = *(tab + i);
		}
	}
	return maxi;
}

float medie(int* tab, int n)
{
	float med = 0.0f;
	for (int i = 0; i < n; i++)
	{
		med += *(tab + i);
	}
	return (float)med / n;
}

int *olympic_filter(int* tab, int& n)
{
	bool ok_min = true, ok_max = true, sortat;
	for (int i = 0; i < n; i++)
	{
		if ((*(tab + i) == minim(tab, n)) && ok_min == true)
		{
			for (int j = i; j < n - 1; j++)
			{
				*(tab + j) = *(tab + j + 1);
			}
			n--;
			ok_min = false;
		}
		if ((*(tab + i) == maxim(tab, n)) && ok_max == true)
		{
			for (int j = i; j < n - 1; j++)
			{
				*(tab + j) = *(tab + j + 1);
			}
			n--;
			ok_max = false;
		}
	}
	do
	{
		sortat = true;
		for (int i = 0; i < n - 1; i++)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				int aux = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = aux;
				sortat = false;
			}
		}
	} while (!sortat);
	return tab;
}

void afisare(int* tab, int n)
{
	printf("\n\tElementele taboului sunt: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(tab + i));
	}
	printf("\n");
}