#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{ _
    string a, b, c;
    getline(cin, a);
    getline(cin >> ws, b);
    getline(cin >> ws, c);

    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;

    for (int i=0; (i<10) && (i < a.size()); i++)
        cout << a[i];
    for (int i=0; (i<10) && (i < b.size()); i++)
        cout << b[i];
    for (int i=0; (i<10) && (i < c.size()); i++)
        cout << c[i];
    cout << endl;
    return 0;
}
