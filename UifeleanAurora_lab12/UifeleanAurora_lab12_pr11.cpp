/*UifeleanAurora, ETTI, Seria A, Grupa 4
Folosind structura de date union denumită grup compusă din diferite câmpuri (int,
long, double, char etc.). Scrieți o aplicatie C/C++ care va iniţializa un element de
tipul grup de la tastatură. Este posibil să afişăm în acelaşi timp toate câmpurile
folosind pointeri sau nume calificate? Afişaţi ceea ce este posibil şi dimensiunea
elementului union. Realizaţi aceeaşi operaţie considerând o simplă structură struct.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include "UifeleanAurora_lab12_pr11_Headerfile.h"

grup *alocare_union(grup un_grup);
grup_struct* alocare_struct(grup_struct un_struct);

int main()
{
	grup un_grup = {}, *pg;
	grup_struct un_struct = {}, * ps;
	printf("\n\tNumar intreg: ");
	scanf("%d", &un_grup.numar_intreg);
	printf("\tSir de caractere: ");
	scanf("%s", un_grup.sir_caractere);
	printf("\tNumar real: ");
	scanf("%f", &un_grup.numar_real);
	printf("\n\tNumar intreg: ");
	scanf("%d", &un_struct.numar_intreg);
	printf("\tSir de caractere: ");
	scanf("%s", un_struct.sir_caractere);
	printf("\tNumar real: ");
	scanf("%f", &un_struct.numar_real);
	pg = alocare_union(un_grup);
	ps = alocare_struct(un_struct);
	afisare_union_prin_adresa(pg + 0);
	afisare_union_prin_valoare(un_grup);
	printf("\n\tMarimea lui union: %d\n", sizeof(grup));
	afisare_struct_prin_adresa(ps + 0);
	afisare_struct_prin_valoare(un_struct);
	return 0;
}

grup *alocare_union(grup un_grup)
{
	grup* p = (grup*)malloc(sizeof(grup));
	*p = un_grup;
	return p;
}

grup_struct* alocare_struct(grup_struct un_struct)
{
	grup_struct* p = (grup_struct*)malloc(sizeof(grup_struct));
	*p = un_struct;
	return p;
}