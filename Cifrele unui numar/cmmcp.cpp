#include <iostream>
using namespace std;

int main()
{
    long long int n;
    int max = -1, cif;
    cin >> n;
    do
    {
        cif = n % 10;
        if ((cif >= max) && cif % 2 == 0)
        {
            max = n % 10;
        }
        n = n / 10;
    } while (n);
    if (max == -1)
    {
        cout << 10;
    }
    else
    {
        cout << max;
    }
    return 0;
}