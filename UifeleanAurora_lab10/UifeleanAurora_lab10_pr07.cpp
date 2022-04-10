/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program care preia din linia de comandă şiruri de caractere şi afişează
şirul rezultat din concatenarea acestora.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

#define dim 257

int main(int argc, char* argv[])
{
	char s[dim] = "";
	for (int i = 1; i < argc; i++)
	{
		strcat(s, *(argv + i));
	}
	printf("\n\tSirul introdus si concatenat este: %s", s);
	return 0;
}