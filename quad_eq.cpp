#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c, d;
    float realpart, ipart;
    cin >> a;
    cin >> b;
    cin >> c;
    d = ((b * b) - 4 * a * c);
    if (d > 0)
    {
        cout << "The Roots Are:-\n";
        cout << (((-b) + sqrt(d)) / 2 * a) << "\n";
        cout<< ((-b)-sqrt(d)/(2*a));
    }
    else if (d == 0)
    {
        cout << "The root are:-\n";
        cout << ((-b) / (2 * a));
    }
    else
    {
        cout << "The roots are:-\n";
        realpart= ((-b) / (2 * a));
        ipart= sqrt(-d) / (2 * a);
        cout<<setprecision(2)<<realpart<<"+"<<setprecision(2)<<ipart<<"i"<<endl;
        cout<<setprecision(2)<<realpart<<"-"<<setprecision(2)<<ipart<<"i"<<endl;
    }
    return 1;
}
