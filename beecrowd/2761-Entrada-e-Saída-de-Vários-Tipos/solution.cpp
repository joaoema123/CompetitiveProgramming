#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    float b;
    char c;
    string d;

    cin >> a >> b >> c;
    getline(cin >> ws, d);
    cout << a << fixed << setprecision(6) << b << c << d << endl;
    cout << a << '\t' << b << '\t' << c << '\t' << d << endl;
    // cout << a << "        " << b << "        " << c << "        " << d << endl;

    cout << a << "          " << b << "          " << c << "          " << d << endl;
}
