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
	char alfabet[27] = "";
	int n = strlen(s), j = 0;
	for (int i = 0; i < n; i++)
	{
		if (strchr(alfabet, *(s + i)) == NULL)
		{
			*(alfabet + j) = *(s + i);
			j++;
		}
		else
		{
			for (int k = i; k < n - 1; k++)
			{
				*(s + k) = *(s + k + 1);
			}
			s[n - 1] = '\0';
		}
	}
	printf("\n%s\n", alfabet);
}