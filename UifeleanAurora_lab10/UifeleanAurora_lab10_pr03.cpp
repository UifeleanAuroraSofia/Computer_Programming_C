/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi o aplicaţie care citeşte de la tastatură un şir de caractere cu lungimea mai mare
decât 7. Folosiţi un pointer pt. a accesa şi afişa caracterele de pe poziţiile 1, 3, 5 şi 7
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include <iostream>
using namespace std;

#define dim 50

int main()
{
	char* s;
	int n;
	do
	{
		printf("\nIntroduceti un sir de caractere: ");
		s = new char[dim];
		cin >> s;
		n = strlen(s);
		if (n > 7)
		{
			printf("\nSirul nu este valid!\n");
		}
	} while (n > 7);
	for (int i = 0; i < strlen(s); i = i + 2)
	{
		printf("%c", *(s + i));
	}
	return 0;
}