#include <iostream>
using namespace std;

struct Data_calend {
	int ziua;
	char luna[11];
	int anul;
};
struct Date_pers {
	char nume[16];
	char prenume[20];
	long cod;
	struct Data_calend data_nast;
	void citDatePers(Date_pers*);//methods inside struct
	void afisDatePers(Date_pers*);
};
void afisDatePers(Date_pers* p) {
	cout << "\n Numele: " << p->nume;
	cout << "\n Prenumele: " << p->prenume;
	cout << "\n Cod: " << p->cod;
	cout << "\n Data nasterii: ";
	cout << "\n\t Ziua: " << (p->data_nast).ziua;
	cout << "\n\t Luna: " << (p->data_nast).luna;
	cout << "\n\t Anul: " << (p->data_nast).anul;
}
void citDatePers(Date_pers* p) {
	cout << "\nNumele: ";
	cin >> p->nume;
	cout << "\nPrenumele: ";
	cin >> p->prenume;
	cout << "\nCod: ";
	cin >> p->cod;
	cout << "\nData nasterii: ";
	cout << "\n\tZiua: ";
	cin >> (p->data_nast).ziua;
	cout << "\n\tLuna: ";
	cin >> (p->data_nast).luna;
	cout << "\n\tAnul: ";
	cin >> (p->data_nast).anul;
}