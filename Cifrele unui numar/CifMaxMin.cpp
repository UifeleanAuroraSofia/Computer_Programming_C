#include<iostream>
using namespace std;
int main()
{
	long long n;
	int cif, cmin = 10, cmax = -1;
	cin >> n;
	while (n)
	{
		cif = n % 10;
		if (cif < cmin)
		{
			cmin = cif;
		}
		if (cif > cmax)
		{
			cmax = cif;
		}
		n = n / 10;
	}
	cout << cmin + cmax;
	return 0;
}