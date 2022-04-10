/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Program cu functii de schimbare a bazei unui numar
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<cstring>
#include<math.h>

//functie de transformare al unui numar fara semn din forma zecimala in forma binara
void binar (int n, int v[], int &t);

//functie de transformare al unui numar fara semn din forma zecimala in forma octala
void octal (int n, int v[], int &t);

//functie de transformare al unui numar fara semn din forma zecimala in forma hexazecimala
void hexazecimal (int n, char v[], int &t);

//afisarea formatului unui numar intr-o baza strict mai mica decat 10
void afisare_intregi(int v[], int t);

//afisarea formatului unui numar intr-o baza care contine si caractere
void afisare_caractere(char v[], int t);

//Funcţia returnează, aranjaţi spre dreapta, acei n biţi ai valorii x, 
//pornind de la poziţia p, unde p<8 * sizeof(x) şi p>n
void getsets(unsigned int&x, int p, int n);

int main()
{
	unsigned int a;
	int v[64] = { 0 }, w[64] = { 0 }, t = 16, g[64] = { 0 }, p, n, i = 0;
	char z[65] = "0000000000000000000000000000000000000000000000000000000000000000";
	printf_s("Introduceti un numar intreg fara semn: ");
	scanf_s("%d", &a);
	printf_s("\nValoarea lui a in zecimal este: %d", a);
	printf_s("\nValoarea lui a in binar este: ");
	binar(a, v, t);
	afisare_intregi(v, t);
	printf_s("\nValoarea lui a in octal este: ");
	octal(a, w, t);
	afisare_intregi(w, t);
	printf_s("\nValoarea lui a in hexazecimal este: ");
	hexazecimal(a, z, t);
	afisare_caractere(z, t);
	printf_s("\n\nIntroduceti pozitia unui bit si numarul de biti selectati: ");
	scanf_s("%d%d", &n, &p);
	int x = 0;
	getsets(a, p, n);
	return 0;
}

void afisare_intregi(int v[], int t)
{
	int aux, j = t - 1;
	for (int i = 0; i < t / 2; i++) 
	//parcurgere pana la jumatatea bitilor si interschimbarea elementelor
	{
		aux = v[i];
		v[i] = v[j];
		v[j] = aux;
		j--;
	}
	for (int i = 0; i < t; i++)
	{
		printf_s("%d", v[i]); //afisare bit cu bit
	}
}

void afisare_caractere(char v[], int t)
{
	int j = t - 1;
	char aux;
	for (int i = 0; i < t / 2; i++)
	//parcurgere pana la jumatatea bitilor si interschimbarea elementelor
	{
		aux = v[i];
		v[i] = v[j];
		v[j] = aux;
		j--;
	}
	for (int i = 0; i < t; i++)
	{
		printf_s("%c", v[i]); //afisare bit cu bit
	}
}

void binar(int n, int v[], int &t)
{
	int i = 0; //numarul total de biti
	while (n)
	{
		if (n % 2 == 0)
		{
			v[i] = 0; //bitul 0 daca nu avem rest
		}
		else
		{
			v[i] = 1; //bitul 1 daca avem rest
		}
		n = n / 2;
		i++;
	}
	if (i <= 16) //16 biti
	{
		t = 16;
	}
	else if (i > 16 && i <= 32) //32 biti
	{
		t = 32;
	}
	else if (i > 32 && i <= 64) //64 biti
	{
		t = 64;
	}
}

void octal(int n, int v[], int &t)
{
	int i = 0; //numarul total de biti
	while (n)
	{
		v[i] = n % 8; //bitul
		n = n / 8;
		i++;
	}
	if (i <= 16) //16 biti
	{
		t = 16;
	}
	else if (i > 16 && i <= 32) //32 biti
	{
		t = 32;
	}
	else if (i > 32 && i <= 64) //64 biti
	{
		t = 64;
	}
}

void hexazecimal(int n, char v[], int &t)
{
	int i = 0, r;
	//i - numarul de biti
	//r - bitul
	while (n)
	{
		r = n % 16;
		if (r < 10)
		{
			v[i] = r + 48; //daca este numar il calibrez
		}
		else
		{
			switch (r) //daca este intre 10 si 15 inclusiv, ii corespund o litera
			{
			case 10:
				v[i] = 'a';
				break;
			case 11:
				v[i] = 'b';
				break;
			case 12:
				v[i] = 'c';
				break;
			case 13:
				v[i] = 'd';
				break;
			case 14:
				v[i] = 'e';
				break;
			case 15:
				v[i] = 'f';
				break;
			}
		}
		n = n / 16;
		i++;
	}
	if (i <= 16) //16 biti
	{
		t = 16;
	}
	else if (i > 16 && i <= 32) //32 biti
	{
		t = 32;
	}
	else if (i > 32 && i <= 64) //64 biti
	{
		t = 64;
	}
}

void getsets(unsigned int &x, int p, int n)
{
	int v[64] = { 0 }, w[64] = { 0 }, t = 16, i = 0;
	char z[65] = "0000000000000000000000000000000000000000000000000000000000000000";
	binar(x, v, t);
	printf_s("\nCei n biti a lui a in binar de la pozitia p (din dreapta): ");
	//aranjaţi spre dreapta, acei n biţi ai valorii x, pornind de la poziţia p
	for (int k = p; k >= p - n + 1; k--)
	{
		printf("%d", v[k]);
	}
	octal(x, w, t);
	printf_s("\nCei n biti a lui a in octal de la pozitia p (din dreapta): ");
	//aranjaţi spre dreapta, acei n biţi ai valorii x, pornind de la poziţia p
	for (int k = p; k >= p - n + 1; k--)
	{
		printf("%d", w[k]);
	}
	hexazecimal(x, z, t);
	printf_s("\nCei n biti a lui a in hexazecimal de la pozitia p (din dreapta): ");
	//aranjaţi spre dreapta, acei n biţi ai valorii x, pornind de la poziţia p
	for (int k = p; k >= p - n + 1; k--)
	{
		printf("%c", z[k]);
	}
}