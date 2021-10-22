#include<iostream>
using namespace std;

void cate_cifre(unsigned long long n, int &s, int &k)
{
	s = 0;
	while (n)
	{
		s = s + n % 10;
		n = n / 10;
	}
	k = s;
}

int main()
{
	int k, s;
	unsigned long long n, m = 0;
	cin >> n;
	cate_cifre(n, s, k);
	while (s > 0)
	{
		if (s > 9)
		{
			m = m * 10 + 9;
		}
		else
		{
			m = m * 10 + s;
		}
		s = s - 9;
		k--;
	}
	while (k)
	{
		m = m * 10;
		k--;
	}
	cout << m;
	return 0;
}