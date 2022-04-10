/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care determină toţi divizorii unui număr
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
using namespace std;

void divizori(int n);

int main()
{
	int n;
	printf_s("Introduceti doua numere intregi: ");
	scanf_s("%d", &n);
	printf_s("Toti divizorii numarului %d este: ", n);
	divizori(n);
	return 0;
}

void divizori(int n)
{
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			printf_s("%d ", i);
		}
	}
	printf_s("%d ", n);
}