/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru determinarea duratei unei calatorii (ore si minute) dintre Cluj si Brasov
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int h1, h2, m1, m2;
	printf_s("Introduceti ora si minutele plecarii din Cluj: ");
	scanf_s("%d%d", &h1, &m1);
	printf_s("Introduceti ora si minutele sosirii la Brasov: ");
	scanf_s("%d%d", &h2, &m2);
	if (h1 > h2)
	{
		if (m1 <= m2)
		{
			if (m2 - m1 < 10 && m2 - m1 > 0)
			{
				printf("%d ore si 0%d minute", h1 - h2 - 1, m1 + 60 - m2);
			}
			else if (m2 - m1 >= 10)
			{
				printf("%d ore si %d minute", h1 - h2 - 1, m1 + 60 - m2);
			}
			else
			{
				printf("%d ore si 00 minute", h1 - h2);
			}
		}
		else
		{
			printf("%d ore si %d minute", h1 - h2 - 1, m2 + 60 - m1);
		}
	}
	else
	{
		if (m1 <= m2)
		{
			if (m2 - m1 < 10 && m2 - m1 > 0)
			{
				printf("%d ore si 0%d minute", h2 - h1, m2 - m1);
			}
			else if (m2 - m1 >= 10)
			{
				printf("%d ore si %d minute", h2 - h1, m2 - m1);
			}
			else
			{
				printf("%d ore si 00 minute", h2 - h1);
			}
		}
		else
		{
			printf("%d ore si %d minute", h2 - h1 - 1, m2 + 60 - m1);
		}
	}
	return 0;
}