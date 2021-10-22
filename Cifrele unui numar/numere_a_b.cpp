#include<iostream>
using namespace std;
int main()
{
	long long a, b, c = 0, p = 1, cifa, cifb;
	cin >> a >> b;
	while (a)
	{
		cifa = a % 10;
		cifb = b % 10;
		c = c + ((cifa + cifb) / 2) * p;
		p = p * 10;
		a = a / 10;
		b = b / 10;
	}
	cout << c;
}