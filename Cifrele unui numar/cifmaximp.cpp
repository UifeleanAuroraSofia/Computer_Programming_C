#include <iostream>
using namespace std;

int cifmax(int n)
{
    int max1 = 0, max = 0;
    cin >> n;
    while (n)
    {
        if (n % 10 >= max1 && (n % 10) % 2 != 0)
        {
            max1 = n % 10;
        }
        if (n % 10 >= max && (n % 10) % 2 == 0)
        {
            max = n % 10;
        }
        n = n / 10;
    }
    if (max1 > max)
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
    int n, a[100], k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (cifmax(a[i]) == 1)
        {
            k++;
        }
    }
    cout << k;
    return 0;
}