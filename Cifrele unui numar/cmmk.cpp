#include<iostream>
using namespace std;
int main()
{
	int k, ok = 1;
	long long n;
	cin >> n >> k;
	while (n)
	{
		if (n % 10 > k)
		{
			ok = 0;
		}
		n = n / 10;
	}
	if (ok == 1)
	{
		cout << "DA";
	}
	else
	{
		cout << "NU";
	}
	return 0;
}