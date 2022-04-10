/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program care verifică dacă un număr citit de la tastatură este pătrat perfect
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int a;
	printf_s("Introduceti un numar natural: ");
	scanf_s("%d", &a);
	if (sqrt(a) == (int)sqrt(a))
	{
		printf_s("Numarul %d este un patrat perfect.", a);
	}
	else
	{
		printf_s("Numarul %d NU este un patrat perfect.", a);
	}
	return 0;
}