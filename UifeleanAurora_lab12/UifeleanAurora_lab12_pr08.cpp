/*UifeleanAurora, ETTI, Seria A, Grupa 4
Declaraţi un nou tip de date O_struct, care să conţină o variabilă de tip întreg, una de
tip caracter şi un şir de 256 de caractere. Definiţi in main( ) o variabilă statică de tip
O_struct, căreia să-i iniţializaţi câmpurile cu date citite de la intrarea standard.
Declaraţi apoi un pointer de tip O_struct, numit po_struct, care va fi definit prin
alocarea dinamică a unei zone de memorie care să conţină un articol de tip O_struct.
Iniţializaţi câmpurile structurii de date folosind pointerul po_struct. Afisati toate
campurile si eliberaţi zona de memorie alocată.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include "UifeleanAurora_lab12_pr08_Headerfile.h"

O_struct *alocare();

int main()
{
	O_struct structura{};
	O_struct *po_struct = alocare();
	citire_prin_valoare(structura);
	citire_prin_adresa(po_struct);
	afisare_prin_valoare(structura);
	afisare_prin_adresa(po_struct);
	free(po_struct);
	return 0;
}

O_struct *alocare()
{
	O_struct* p = NULL;
	p = (O_struct*)malloc(sizeof(O_struct));
	return p;
}