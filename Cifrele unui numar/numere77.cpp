#include<iostream>
using namespace std;

int echilibrat(int n)
{
	int cif, cifp = 0, cifi = 0;
	while (n)
	{
		cif = n % 10;
		if (cif % 2 == 0)
		{
			cifp = cifp + cif;
		}
		else
		{
			cifi = cifi + cif;
		}
		n = n / 10;
	}
	if (cifp == cifi)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a, b, i;
	long long s = 0;
	cin >> a >> b;
	i = a;
	while (i <= b)
	{
		if (echilibrat(i) == 1)
		{
			s = s + i;
		}
		i++;
	}
	cout << s;
}