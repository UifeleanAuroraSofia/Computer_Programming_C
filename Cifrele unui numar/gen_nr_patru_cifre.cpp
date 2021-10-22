#include<iostream>
using namespace std;
int main()
{
	int c1, c2, i = 0, par = 0;
	cin >> c1 >> c2;
	while (c1 <= 9)
	{
		while (par <= 8)
		{
			while (i <= c2)
			{
				cout << c1 << par << i << par;
				i++;
				cout << endl;
			}
			par = par + 2;
			i = 0;
		}
		i = 0;
		par = 0;
		c1++;
	}
}