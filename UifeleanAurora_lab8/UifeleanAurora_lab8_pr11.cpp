/*UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Se citeşte de la tastatură un şir de caractere. Scrieţi funcţia care inversează şirul 
şi apoi formează un alt şir de caractere ce va conţine elementele de pe poziţiile pare 
ale şirului inversat. Afişaţi şirurile obţinute.
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<cstring>

#define DIM 50

void inversare_afisare_caractere_pozitii_pare(char s[], char p[]);

int main()
{
	char s[DIM], p[DIM] = "";
	printf("Cititi un sir de caractere: ");
	gets_s(s);
	inversare_afisare_caractere_pozitii_pare(s, p);
}

void inversare_afisare_caractere_pozitii_pare(char s[], char p[])
{
	int t = strlen(s) - 1;
	for (int i = 0; i < strlen(s) / 2; i++)
	{
		char aux = s[i];
		s[i] = s[t];
		s[t] = aux;
		t--;
	}
	printf("Sirul inversat este: ");
	printf("\n%s\n", s);
	if (strlen(s) % 2 != 0)
	{
		t = strlen(s) / 2 + 1;
	}
	else
	{
		t = strlen(s) / 2;
	}
	int k = 0;
	for (int i = 0; i < t; i++)
	{
		p[i] = s[k];
		k += 2;
	}
	printf("Sirul format din caracterele de pe pozitii pare este: ");
	printf("\n%s\n", p);
}