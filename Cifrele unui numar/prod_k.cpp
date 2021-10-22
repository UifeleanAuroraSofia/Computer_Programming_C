#include<iostream>
using namespace std;
int main()
{
	long long n, p = 1;
	int k, cif, ok = 0;
	cin >> n >> k;
	while (n)
	{
		cif = n % 10;
		if (cif != k)
		{
			p = p * cif;
			ok = 1;
		}
		n = n / 10;
	}
	if (ok == 1)
	{
		cout << p;
	}
	else
	{
		cout << 0;
	}
	return 0;
}