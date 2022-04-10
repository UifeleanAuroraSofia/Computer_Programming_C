/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie un program care inversează şirul de caractere citit din linia de comandă.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

#define dim 257

int main(int argc, char* argv[])
{
	char s[dim] = "";
	int j = 0, ct = 0;
	for (int i = argc - 1; i >= 1; i--)
	{
		ct++;
		for (int k = strlen(*(argv + i)) - 1; k >= 0; k--)
		{
			strcpy(s + j, (*(argv + i) + k));
			printf("%s ", *(argv + i) + k);
			j++;
		}
		printf("\n");
	}
	s[strlen(s - 1) - strlen(argv[ct - 1])] = '\0';
	printf("\n\tSirul introdus si concatenat este: %s", s);
	return 0;
}