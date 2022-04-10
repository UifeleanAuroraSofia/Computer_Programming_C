/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Definiţi un tablou de pointeri către şiruri de caractere. Fiecare locaţie a tabloului
conţine adrese către unul din urmatoarele şiruri de caractere:
- "valoare prea mică"
- "valoare prea mare"
- "valoare corectă"
Aplicaţia generează un număr aleator între 1 şi 100 şi apoi citeşte în mod repetat
intrarea de la tastatură până când utilizatorul introduce valoarea corectă. Folosiţi
mesajele definite pentru a informa utilizatorul, la fiecare pas, despre relaţia existentă
între numărul generat şi ultima valoare citită
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h> 

void comparare(const char**, int n, int nr);

int main()
{
	const char* sir[] = { "valoare prea mica\n", "valoare prea mare\n", "valoare corecta\n" };
	int n = rand() % 100 + 1, nr;
	do {
		printf("Cititi un numar de la tastatura: ");
		scanf("%d", &nr);
		comparare(sir, n, nr);
	} while (n!=nr);
	return 0;
}

void comparare(const char**sir, int n, int nr)
{
	if (nr < n)
	{
		printf(sir[0]);
	}
	else if (nr > n)
	{
		printf(sir[1]);
	}
	else
	{
		printf(sir[2]);
	}
}