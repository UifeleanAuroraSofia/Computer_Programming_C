/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program pentru determinarea celui mai mic element pozitiv dintr-un tablou
unidimensional.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[5] = { -2, -1, 0, 1, 2 };
	int mini = 1000000;
	for (int i = 0; i < 5; i++)
	{
		if (a[i] >= 0 && a[i] <= mini)
		{
			mini = a[i];
		}
	}
	printf("Cel mai mic element pozitiv: %d\n", mini);
	return 0;
}