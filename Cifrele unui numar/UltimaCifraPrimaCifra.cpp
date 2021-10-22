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
	int n, x, y, cifx, cify;
	cin >> n;
	cin >> x; 
	n--;
	cifx = x % 10;
	while (n)
	{
		cin >> y;
		cifx = x % 10;
		cify = prima_cifra(y);
		if (cifx == cify)
		{
			cout << x << " " << y << endl;
		}
		x = y;
		n--;
	}
	return 0;
}