#include<iostream>
using namespace std;
int main()
{
    int n, ok = 0, s[999] = { 0 }, a = -1, b = -1;
    long long x;
    cin >> n;
    while (n)
    {
        cin >> x;
        if (x >= 100 && x <= 999)
        {
            s[x] = 1;
        }
        n--;
    }
    for (int i = 999; i >= 100; i--)
    {
        if (s[i] == 0 && ok == 0)
        {
            a = i;
            ok++;
            i--;
        }
        if (s[i] == 0 && ok == 1)
        {
            b = i;
            ok++;
            break;
        }
    }
    if (a == -1 || b == -1)
    {
        cout << "NU EXISTA";
    }
    else
    {
        cout << b << " " << a;
    }
    return 0;
}