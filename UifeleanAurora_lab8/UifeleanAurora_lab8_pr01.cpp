/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program pentru determinarea valorii medii a elementelor pozitive/negative dintr-un tablou
unidimensional.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[5] = { -2, -1, 0, 1, 2 };
	float mp = 0, mn = 0;
	int p = 0, n = 0;
	for (int i = 0; i < 5; i++)
	{
		if (a[i] < 0)
		{
			mn = mn + a[i];
			n++;
		}
		else
		{
			mp = mp + a[i];
			p++;
		}
	}
	mn = (float)(mn / n);
	mp = (float)(mp / p);
	printf("Media numerelor negative este: %f\n", mn);
	printf("Media numerelor pozitive este: %f", mp);
	return 0;
}