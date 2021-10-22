#include<iostream>
using namespace std;
int main()
{
	long long n;
	int a = 0, b = 0, c = 0, d = 0, e = 1, f, cif, ucif, pcif;
	cin >> n;
	pcif = n % 10;
	while (n)
	{
		cif = n % 10;
		a = a + cif * cif;
		if (cif % 2 != 0)
		{
			b = b + cif;
		}
		if (cif % 3 == 0)
		{
			c = c + cif;
		}
		if (cif > 5)
		{
			d++;
		}
		if (cif != 0)
		{
			e = e * cif;
		}
		if (n <= 9)
		{
			ucif = n;
			f = ucif + pcif;
		}
		n = n / 10;
	}
	cout << a << " " << b << " " << c << " " << d << " " << e << " " << f;
	return 0;
}