/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care citeşte n numere întregi de la tastatură şi le afişează pe cele divizibile cu 3
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<conio.h>
using namespace std;

int numar_cifre(int n);

int main()
{
	int n, i = 0, v[256], nr, l = 0;
	printf_s("Introduceti un numar de numere: ");
	scanf_s("%d", &n);
	printf_s("Introduceti %d numere: ", n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &nr);
		if (nr % 3 == 0)
		{
			v[l] = nr;
			l++;
		}
	}
	printf_s("Numerele divizibile cu 3 sunt: ");
	for (int k = 0; k < l; k++)
	{
		printf_s("%d ", v[k]);
	}
	return 0;
}