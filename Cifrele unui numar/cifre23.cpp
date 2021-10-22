#include<iostream>
using namespace std;
int main()
{
	int cif, c2 = 0, c3 = 0;
	long long n;
	cin >> n;
	while (n)
	{
		cif = n % 10;
		if (cif == 2)
		{
			c2++;
		}
		else if (cif == 3)
		{
			c3++;
		}
		n = n / 10;
	}
	if (c2 > c3)
	{
		cout << 2;
	}
	else if (c3 > c2)
	{
		cout << 3;
	}
	else
	{
		cout << 2 << " " << 3;
	}
	return 0;
}