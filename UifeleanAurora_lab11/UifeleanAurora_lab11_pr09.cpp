/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Scrieţi un program în care se citesc m şiruri de caractere ce pot contine si spatiu care
se concatenează într-un alt şir, alocat dinamic. Afisati sirurile initiale introduse (mai
putin de 256 caractere), cel concatenat (sirurile vor fi separate prin spatiu), cuvintele
independente (separate prin spatiu folosind strtoken( )), si numarul lor. Eliberaţi
memoria alocată dinamic. Repetati procesul atat cat doreste utilizatorul. Generalizati
considerand ca si delimitatori sirul: char delimiters[] = " .,;:!?-"; in loc de spatiu.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

char** citire(int& m, int& lmax);
void afisare_propozitii(char** prop, int m);
void afisare_concatenat(char* concat, int m);
void afisare_cuvinte(char* concat, int n);
char *concatenare(char** prop, int &m, int lmax);

#define dim 257

int main()
{
	int m = 0, lmax;
	char** propozitii = citire(m, lmax), * c = concatenare(propozitii, m, lmax);
	afisare_propozitii(propozitii, m);
	afisare_concatenat(c, m);
	afisare_cuvinte(c, m);
	return 0;
}

char** citire(int& m, int &lmax)
{
	char** propozitii = NULL;
	char* propozitie;
	int l;
	lmax = 0;
	propozitie = new char[dim];
	printf("\n\tIntroduceti numarul de propozitii: ");
	scanf("%d", &m);
	cin.get();
	if ((propozitii = new char *[m]))
	{
		for (int i = 0; i < m; i++) 
		{
			cout << "\n\tIntroduceti propozitia: ";
			cin.getline(propozitie, dim);
			l = strlen(propozitie);
			lmax += l;
			propozitii[i] = new char[l + 1];
			if (propozitii[i] == 0) 
			{
				cout << "\n\tAlocare nereusita! " << endl;
				break;
			}
			strcpy(propozitii[i], propozitie);
		}
	}
	else
	{
		printf("\n\tAlocare nereusita!");
	}
	return propozitii;
}

void afisare_propozitii(char** prop, int m)
{
	printf("\n\n\tPropozitiile sunt: \n\t");
	for (int i = 0; i < m; i++)
	{
		printf("\n\t%s", *(prop + i));
	}
}

void afisare_concatenat(char* concat, int m)
{
	printf("\n\n\tSirul concatenat este \n\t%s", concat);
}

char* concatenare(char** prop, int& m, int lmax)
{
	char* c = new char[lmax + 1]{ 0 };
	for (int i = 0; i < m; i++)
	{
		strcat(c, *(prop + i));
		strcat(c, " ");
	}
	return c;
}

void afisare_cuvinte(char* concat, int n)
{
	int k = 0;
	char* cuv, pisici[] = " .,;:!?-";
	cuv = strtok(concat, pisici);
	printf("\n\n\tCuvintele sunt: \n\t");
	while (cuv != NULL)
	{
		printf("%s ", cuv);
		cuv = strtok(NULL, pisici);
		k++;
	}
	printf("\n\n\tNumarul de cuvinte este: %d\n\n", k);
}