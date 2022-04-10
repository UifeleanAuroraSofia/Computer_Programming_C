/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi un program în care să definiţi un tablou de pointeri spre şiruri de caractere, pe
care să-l iniţializaţi cu diferite mesaje. Afişaţi mesajele.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h> 


int main()
{
	const char* sir[] = { "Aurora\n", "scrie\n", "poezii\n" };
	for (int i = 0; i < 3; i++)
	{
		printf("%s", *(sir + i));
	}
	return 0;
}
