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
	int n, r, x, s, k = 0;
	cin >> n >> r;
	while (n)
	{
		cin >> x;
		s = suma_cifrele_unui_numar(x);
		if (s % 9 == r)
		{
			k++;
		}
		n--;
	}
	cout << k;
}