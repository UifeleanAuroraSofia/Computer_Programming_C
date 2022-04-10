/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program pentru afisarea unor siruri cu ajutorul secventelor escape
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

#define a "Pisicile gri sunt dragute\n"
#define b "Pisicile albe\b sunt dragute\n"
#define c "temele filozofice dezbatute \npe micile strazi din Tokyo\n"
#define d "De ce nu vrei sa te culci\?\n"

int main()
{
	cout << a  << b <<  c <<  d;
	return 0;
}