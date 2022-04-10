/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Să se scrie o aplicaţie C/C++ în care se introduc de la tastatură numere întregi, 
până ce utilizatorul apasă tasta <Esc>. 
Să se determine şi să se afişeze media numerelor impare pozitive
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<conio.h>
using namespace std;

int numar_cifre(int n);

int main()
{
	int n, i = 0, v[256], citire, nr;
	float m = 0;
	do
	{
		printf_s("Introduceti un numar: ");
		scanf_s("%d", &nr);
		if (nr % 2 != 0 && nr > 0)
		{
			m = m + nr;
			i++;
		}
		printf("Continuati ? (d/n) \n");
		citire = _getch();
	} while (!((citire == '\033')));
	printf_s("Media numerelor impare pozitive este: %f", (float) m / i);
	return 0;
}

