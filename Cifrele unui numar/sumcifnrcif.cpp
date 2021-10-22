#include<iostream>
using namespace std;
int main()
{
	long long n;
	int s = 0, nr = 0, cif;
	cin >> n;
	while (n)
	{
		cif = n % 10;
		s = s + cif;
		n = n / 10;
	}
	while (s)
	{
		nr++;
		s = s / 10;
	}
	cout << nr;
	return 0;
}