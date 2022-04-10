/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program care citeşte de la tastatură un şir de caractere, apoi elimină din şir caracterele
care se repetă şi afişează în final şirul obţinut, folosind pointeri.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

void stergere_repetitii_caractere(char s[]);

int main()
{
	char s[50];
	cin.getline(s, 50);
	stergere_repetitii_caractere(s);
	return 0;
}

void stergere_repetitii_caractere(char s[])
{
	char alfabet[27] = "", AB[27] = "abcdefghijklmnopqrstuvwxyz";
	int n = strlen(s), j = 0, f[27] = { 0 }, dec;
	for (int i = 0; i < n; i++)
	{
		if ((*s + i) >= 'a' && (*s + i) <= 'z')
		{
			dec = (int)*(s + i);
			dec = dec - 97;
		}
		else if ((*s + i) >= 'A' && (*s + i) <= 'Z')
		{
			dec = (int)*(s + i);
			dec = dec - 65;
		}
		if (strchr(alfabet, *(s + i)) == NULL)
		{
			*(alfabet + j) = *(s + i);
			j++;
			f[dec]++;
		}
		else
		{
			f[dec]++;
			for (int k = i; k < n - 1; k++)
			{
				*(s + k) = *(s + k + 1);
			}
			s[n - 1] = '\0';
		}
	}
	for (int i = 0; i < 27; i++)
	{
		if (f[i] != 0)
		{
			printf("\nCaracterul %c apare de %d ori.", AB[i], f[i]);
		}
	}
}