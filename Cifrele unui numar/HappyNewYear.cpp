#include<iostream>
using namespace std;

long long suma_cifrele_unui_numar(long long n)
{
	int s = 0;
	while (n)
	{
		s = s + n % 10;
		n = n / 10;
	}
	return s;
}

int main()
{
	int n, s = 0, m;
	long long x;
	cin >> n;
	while (n)
	{
		cin >> x;
		s = s + suma_cifrele_unui_numar(x);
		n--;
	}
	while (s > 9)
	{
		s = suma_cifrele_unui_numar(s);
	}
	m = 7 * s;
	cout << m * (m + 1) / 2;
}