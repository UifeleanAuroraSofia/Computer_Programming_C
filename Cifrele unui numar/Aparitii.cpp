#include<iostream>
using namespace std;
int main()
{
	long long n;
	int cif, c, nrap = 1;
	cin >> n;
	c = n % 10;
	n = n / 10;
	while (n)
	{
		cif = n % 10;
		if (cif == c)
		{
			nrap++;
		}
		n = n / 10;
	}
	cout << nrap;
	return 0;
}