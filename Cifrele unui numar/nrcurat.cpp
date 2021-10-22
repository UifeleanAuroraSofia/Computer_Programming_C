#include<iostream>
#include<fstream>
using namespace std;

ifstream fin("nrcurat.in");
ofstream fout("nrcurat.out");

int oglindit(int n)
{
	int o = 0, cif, aux;
	aux = n;
	while (n)
	{
		cif = n % 10;
		o = o * 10 + cif;
		n = n / 10;
	}
	return o;
}

int urma(int n)
{
	int aux = n, n9 = 0;
	if (n == 0)
	{
		return 9;
	}
	else
	{
		while (n)
		{
			n9 = n9 * 10 + 9;
			n = n / 10;
		}
	}
	return n9 - aux;
}

int main()
{
	int x, o, u;
	while (fin >> x)
	{
		u = urma(x);
		o = oglindit(x);
		if (o == u)
		{
			fout << 1 << " ";
		}
		else
		{
			fout << 0 << " ";
		}
	}
	return 0;
}