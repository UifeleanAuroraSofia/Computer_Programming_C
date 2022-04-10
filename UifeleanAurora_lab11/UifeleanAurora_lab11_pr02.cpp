/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Fie o aplicaţie de gestiune distribuită care consideră că tratează activitatea din 5 oraşe
diferite în fiecare oraş fiind 3 birouri de vânzare pe teritoriul respectiv. Să se creeze în
cadrul unei funcţii un tablou de 5 pointeri către date de tip flotant, fiecare pointer din
acest tablou referind o zonă în heap alocată dinamic de 3 date flotante ce reprezintă
situaţia vânzărilor la sfărşitul unei zile. Se cere prelucrarea datelor din fiecare oraş,
respectiv din fiecare birou de vânzare, prelucrare ce va include:
- funcţie care permite introducerea datelor pentru cele 5 oraşe şi respectiv
pentru fiecare oraş pentru cele 3 magazine din oraş;
- funcţie ce permite determinarea totalului de vânzări pe fiecare oraş în parte,
valoare pe care o va returna astfel că în programul principal se va calcula şi
afişa media vânzărilor din toate cele 5 oraşe;
- funcţie care va permite eliberarea spaţiului de memorie alocat dinamic astfel
încât dacă aceeaşi firmă are alte 3 magazine în cele 5 oraşe de profil diferit să
poată realoca un spaţiu echivalent pentru noile prelucrări pe care le va
efectua.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>

float* citire_situatie_magazine();
float vanzari_pe_oras(float* oras);
void eliberare_memorie(float** orase);

int main()
{
	float** orase = NULL, media = 0.0f;
	orase = (float**)malloc(5 * sizeof(float*));
	for (int i = 0; i < 5; i++)
	{
		printf("In orasul %d sunt 3 magazine care au urmatorul profit la finalul zilei: ", i);
		*(orase + i) = citire_situatie_magazine();
	}
	for (int i = 0; i < 5; i++)
	{
		media += vanzari_pe_oras(*(orase + i));
	}
	printf("Media vanzarilor din toate cele 5 orase este: %.2f", (float)media / 5);
	eliberare_memorie(orase);
	return 0;
}

float* citire_situatie_magazine()
{
	float* p = NULL;
	p = (float*)malloc(3 * sizeof(float));
	for (int i = 0; i < 3; i++)
	{
		scanf("%f", (p + i));
	}
	return p;
}

float vanzari_pe_oras(float* oras)
{
	float suma = 0.0f;
	for (int i = 0; i < 3; i++)
	{
		suma += *(oras + i);
	}
	return suma;
}

void eliberare_memorie(float** orase)
{
	if (orase)
	{
		free(orase);
	}
}