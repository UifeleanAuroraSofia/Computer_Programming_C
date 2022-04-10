/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru calcularea afisarea bitilor unui numar
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	unsigned char x = '\27';
	int f[8] = { 0 };
	int i = 0;
	while (x)
	{
		f[i] = x % 2;
		x = x / 2;
		i++;
	}
	for (int i = 7; i >= 0; i--)
	{
		cout << f[i];
	}
	return 0;
}