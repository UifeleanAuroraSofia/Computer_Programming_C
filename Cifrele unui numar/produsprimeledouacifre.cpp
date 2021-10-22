#include<iostream>
using namespace std;
int main()
{
	long long n, p;
	cin >> n;
	while (n > 99)
	{
		n = n / 10;
	}
	p = n % 10 * (n / 10);
	cout << p;
	return 0;
}