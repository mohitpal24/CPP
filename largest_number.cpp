#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << " is greater";
    }
    else if (b > a && b > c)
    {
        cout << b << " is greater";
    }
    else
    {
        cout << c << " is greater";
    }

    return 1;
}
