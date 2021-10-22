#include<fstream>
#include<iostream>
using namespace std;

ifstream fin("toate.in");
ofstream fout("toate.out");

void elimina_cifra_9(int &n)
{
	int m = 0, p = 1, cif;
	while (n)
	{
		cif = n % 10;
		if (cif != 9)
		{
			m = m + cif * p;
			p = p * 10;
		}
		n = n / 10;
	}
	n = m;
}

int main()
{
	int n, x, maxi = -1;
	fin >> n;
	while (n)
	{
		fin >> x;
		elimina_cifra_9(x);
		if (x > maxi)
		{
			maxi = x;
		}
		n--;
	}
	fout << maxi;
}