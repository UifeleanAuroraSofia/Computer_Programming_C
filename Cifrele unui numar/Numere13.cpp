#include<iostream>
using namespace std;

int prima_cifra(int n)
{
	while (n > 9)
	{
		n = n / 10;
	}
	return n;
}

int main()
{
	int x, y, cifx, cify, k = 0;
	cin >> x >> y;
	while (x != 0 && y != 0)
	{
		cifx = prima_cifra(x);
		cify = prima_cifra(y);
		if (cifx == cify)
		{
			k++;
		}
		cin >> x >> y;
	}
	cout << k;
	return 0;
}