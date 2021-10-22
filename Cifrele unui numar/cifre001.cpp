#include<iostream>
using namespace std;

long long cate_cifre(long long n)
{
	int k = 0;
	while (n)
	{
		n = n / 10;
		k++;
	}
	return k;
}

int main()
{
	int cifn, cifm, k = 0;
	long long n, m;
	cin >> n >> m;
	cifn = cate_cifre(n);
	cifm = cate_cifre(m);
	if (cifn != cifm)
	{
		cout << "NU";
	}
	else
	{
		cout << "DA" << endl;
		while (n)
		{
			cifn = n % 10; cifm = m % 10;
			n = n / 10; m = m / 10;
			if (cifn == cifm)
			{
				k++;
			}
		}
		cout << k;
	}
	return 0;
}