#include<iostream>
using namespace std;
int main()
{
	int x, y, n, m = 0, p = 1;
	cin >> n;
	while (n)
	{
		x = n % 10;
		y = (n / 10) % 10;
		n = n / 100;
		m = m + (x * 10 + y) * p;
		p = p * 100;
	}
	cout << m;
}