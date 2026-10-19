#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define s second
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{ _
    float a, b;
    double c, d;
    cin >> a >> b >> c >> d;

    cout << "A = " << fixed << setprecision(6) << a;
    cout << ", B = " << fixed << setprecision(6) << b;
    cout << "\nC = " << fixed << setprecision(6) << c;
    cout << ", D = " << fixed << setprecision(6) << d;
    cout << endl;

    cout << "A = " << fixed << setprecision(1) << a;
    cout << ", B = " << fixed << setprecision(1) << b;
    cout << "\nC = " << fixed << setprecision(1) << c;
    cout << ", D = " << fixed << setprecision(1) << d;
    cout << endl;

    cout << "A = " << fixed << setprecision(2) << a;
    cout << ", B = " << fixed << setprecision(2) << b;
    cout << "\nC = " << fixed << setprecision(2) << c;
    cout << ", D = " << fixed << setprecision(2) << d;
    cout << endl;

    cout << "A = " << fixed << setprecision(3) << a;
    cout << ", B = " << fixed << setprecision(3) << b;
    cout << "\nC = " << fixed << setprecision(3) << c;
    cout << ", D = " << fixed << setprecision(3) << d;
    cout << endl;

    cout << "A = " << scientific << uppercase << setprecision(3) << a;
    cout << ", B = " << scientific << uppercase << setprecision(3) << b;
    cout << "\nC = " << scientific << uppercase << setprecision(3) << c;
    cout << ", D = " << scientific << uppercase << setprecision(3) << d;
    cout << endl;

    cout << defaultfloat << nouppercase << setprecision(6);
    double dif;
    cout << "A = ";
    if (a < 0)
    {
        dif = trunc(a)-a;
        if (dif <= 0.5) cout << ceil(a);
        else cout << floor(a);
    }
    else
    {
        dif = a - trunc(a);
        if (dif < 0.5) cout << floor(a);
        else cout << ceil(a);
    }




    cout << ", B = ";
    if (b < 0)
    {
        dif = trunc(b)-b;
        if (dif <= 0.5) cout << ceil(b);
        else cout << floor(b);
    }
    else
    {
        dif = b - trunc(b);
        if (dif < 0.5) cout << floor(b);
        else cout << ceil(b);
    }
    cout << endl;




    cout << "C = ";
    if (c < 0)
    {
        dif = trunc(c)-c;
        if (dif <= 0.5) cout << ceil(c);
        else cout << floor(c);
    }
    else
    {
        dif = c - trunc(c);
        if (dif < 0.5) cout << floor(c);
        else cout << ceil(c);
    }


    cout << ", D = ";
    if (d < 0)
    {
        dif = trunc(d)-d;
        if (dif <= 0.5) cout << ceil(d);
        else cout << floor(d);
    }
    else
    {
        dif = d - trunc(d);
        if (dif < 0.5) cout << floor(d);
        else cout << ceil(d);
    }
    cout << endl;
    return 0;
}
