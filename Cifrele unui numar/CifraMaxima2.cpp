#include<iostream>
using namespace std;
int main()
{
	long long n;
	int cif, c = 0, nrap = 1;
	cin >> n;
	while (n)
	{
		cif = n % 10;
		if (cif > c)
		{
			c = cif;
			nrap = 1;
		} else
			if (cif == c)
			{
				nrap++;
			}
		n = n / 10;
	}
	cout << c << " " << nrap;
	return 0;
}