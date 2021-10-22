#include<iostream>
using namespace std;
int main()
{
	long long n;
	int p, cifi = 9, cifp = 0, cif;
	cin >> n;
	while (n)
	{
		cif = n % 10;
		if (cif >= cifp && cif % 2 == 0)
		{
			cifp = cif;
		}
		if (cif <= cifi && cif % 2 != 0)
		{
			cifi = cif;
		}
		n = n / 10;
	}
	p = cifp * cifi;
	cout << p;
	return 0;
}