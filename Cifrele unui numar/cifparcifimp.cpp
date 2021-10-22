#include<iostream>
using namespace std;

void cifpi(int n, int& p, int& i)
{
	if (n == 0)
	{
		p++;
	}
	else
		while (n)
		{
			if (n % 2 == 0)
			{
				p++;
			}
			else
			{
				i++;
			}
			n = n / 10;
		}
}

int main()
{
	int n, x, p = 0, i = 0;
	cin >> n;
	while (n)
	{
		cin >> x;
		cifpi(x, p, i);
		n--;
	}
	cout << p << " " << i;
	return 0;
}