/* UifeleanAuroraSofia, ETTI, Seria A, grupa 4
Algoritm de inmultire chinezeasca
*/

#include<iostream>
using namespace std;

//Functie de numarare a cifrelor unui numar
int numar_cifre(int n);

int main()
{
    int a, b, cifa, cifb, aux, i, j, nr, t, k = 0;
    int s[20] = { 0 }; //diagonalele pe care se calculeaza sumele
    printf_s("Introduceti cele doua numere de inmultit: ");
    scanf_s("%d%d", &a, &b); //cele doua numere de inmultit
    t = numar_cifre(a) + numar_cifre(b); //numarul maxim de cifre a produsului celor doua numere
    aux = b; //memorarea valorii b intr-un auxiliar
    while (a)
    {
        cifa = a % 10; //determinarea unei cifre din a
        a = a / 10;
        b = aux; //b se actualizeaza constant cu auxiliar deoarece se strica pe parcurs
        k++;
        i = k; j = k + 1; /*diagonalele pe care se calculeaza sumele
                                                i-ul reprezinta prima diagonala (diagonala unitatilor)
                                                j-ul reprezinta cea de a doua diagonala (diagonala zecilor)
                                                i-ul si j-ul cresc la fiecare tura de inmultiri (tura de inmultiri reprezinta o
                                                cifra a primului numar a inmultita pe rand cu fiecare cifra a numarului b)
                                          */
        while (b)
        {
            cifb = b % 10; //determinarea unei cifre din b
            b = b / 10;
            nr = cifa * cifb; //produsul cifrei a cu cifrele lui b
            s[i] = s[i] + nr % 10; nr = nr / 10; //suma unitatilor
            s[j] = s[j] + nr % 10; //suma zecilor
            i = j; //actualizarea
            j++; //diagonalelor
        }
    }
    int z = 0; //numarul de 0-uri de la inceputul numarului, contor
    for (int i = 1; i <= t; i++) /*parcurgerea elementelor posibil totale din produsul
                                                             rezultat(t - ul reprezinta numarul maxim de cifre pe care il poate avea produsul)*/
    {
        if (s[i] >= 10) //daca suma pe diagonala este mai mare decat 10
        {
            s[i + 1] = (s[i] / 10) % 10 + s[i + 1]; //se aduna la numarul din stanga zecimala numarului pe care ne aflam
            if (s[i + 1] == 0)
            {
                z++; //daca gasim 0-uri le numaram
            }
            else
            {
                z = 0; //daca gasim alte cifre inafara de 0, contorul se reseteaza
            }
            //prin acest if si else putem gasi numarul de 0-uri care se afla in fata produsului
            s[i] = s[i] % 10;
        }
    }
    if (s[i + 1] == 0)
    {
        z++;
    }
    else
    {
        z = 0;
    }
    //procesul se repeta pentru a testa si prima cifra a produsului
    t = t - z; //din numarul total de cifre ale prosului se scad 0-urile din fata

    int p = 1;
    long long produs = 0; //produsul celor doua numere a si b
    for (int i = 1; i <= t; i++)
    {
        produs = produs + s[i] * p;
        /*adun la produs cifrele parcurse de la dreapta la stanga
        si inmultite cu p*/
        p = p * 10;
    }
    printf_s("Produsul celor doua numere este: %d", produs);
    return 0;
}

int numar_cifre(int n)
{
    int k = 0; //contor
    while (n)
    {
        k++;
        n = n / 10;
    }
    return k;
}
