/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program care citeşte de la tastatură două şiruri de caractere şi afişează numărul de
caractere prin care ele diferă (adică numărul de caractere care există în primul şi nu există în al
doilea + numărul de caractere care există în al doilea şi nu există în primul). Folosiţi pointeri pentru
accesul la elementele tablourilor.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

void reuniune_caractere_intersectie(char s[], char t[]);

int main()
{
	char s[50], t[50];
	printf("\nCititi primul sir de caractere: ");
	cin.getline(s, 50);
	printf("\nCititi al doilea sir de caractere: ");
	cin.getline(t, 50);
	reuniune_caractere_intersectie(s, t);
	return 0;
}

void reuniune_caractere_intersectie(char s[], char t[])
{
	int n = strlen(s), m = strlen(t), p = 0, q = 0;
	char alfabet[27] = "";
	for (int i = 0; i < n; i++)
	{
		if (strchr(t, *(s + i)) == NULL)
		{
			p++;
		}
	}
	for (int i = 0; i < m; i++)
	{
		if (strchr(s, *(t + i)) == NULL)
		{
			q++;
		}
	}
	printf("\nNumarul de caractere prin care ele difera: %d\n", p + q);
}