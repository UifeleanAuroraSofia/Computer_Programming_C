/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm pentru calcularea unui polinom e gradul al 3-lea
(numere reale)
*/

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
using namespace std;
int main()
{
	float x;
	int a, b, c, d;
	printf_s("Introduceti valoarea necunoscutei x si cei 4 coeficienti intregi: ");
	scanf_s("%f%d%d%d%d", &x, &a, &b, &c, &d);
	printf_s("Rezultatul polinomului de gardul al 3-lea este: %f", a * x * x * x + b * x * x + c * x + d);
	return 0;
}