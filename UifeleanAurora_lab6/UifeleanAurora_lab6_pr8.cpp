/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care transforma caracterele citite în litere mari în 2 moduri: 
printr-o operație aritmetică, respectiv folosind o operație logică și o mască adecvată
*/

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include<cstring>

#define nr 20
#define dif 32

void transformare_aritmetica(char* x);
void transformare_logica(char* x);

int main() {
	char s[nr] = "";
	printf("Introduceti caractere mici: ");
	scanf("%[^\n]%*c", s);
	printf("Transformarea lor in caractere mari prin operatie aritmetica: ");
	transformare_aritmetica(s);
	printf("\nTransformarea lor in caractere mari prin operatie logica: ");
	transformare_logica(s);
	return 0;
}

void transformare_aritmetica(char* s) 
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	printf(s);
}

void transformare_logica(char* s)
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] & ~dif;
		}
	}
	printf(s);
}