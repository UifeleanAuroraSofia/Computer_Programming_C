/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care:
- determină cel mai mare număr prim mai mic decât numărul dat
- determină toate numerele prime mai mici decât numărul dat
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
using namespace std;

int prim(int n);

int main()
{
	int n;
	printf_s("Introduceti un numar: ");
	scanf_s("%d", &n);
	int m = n;
	while (prim(m) == 0)
	{
		m--;
	}
	printf_s("Cel mai mare numar prim mai mic decat numarul dat: %d\n", m);
	printf_s("Toate numerele prime mai mici decat numarul dat: ");
	if (n >= 2)
	{
		printf_s("2 ");
	}
	for (int i = 3; i <= n; i = i + 2)
	{
		if (prim(i) == 1)
		{
			printf_s("%d ", i);
		}
	}
	return 0;
}

int prim(int n)
{
	if (n < 2)
	{
		return 0;
	}
	else if (n % 2 == 0 && n != 2)
	{
		return 0;
	} else
		for (int i = 3; i * i <= n; i = i + 2)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	return 1;
}