/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru determinarea lungimii si ariei unui cerc
*/

#define _CRT_SECURE_NO_WARNINGS

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	int r;
	printf_s("Introduceti o valoare pentru raza cercului: "); //cout
	scanf_s("%d", &r); //cin
	float l = 2 * M_PI * r;
	float a = M_PI * r * r;
	printf_s("Lungimea si aria cercului sunt: %-5.*f %-5.*f", 3, l, 3, a);
	return 0;
}