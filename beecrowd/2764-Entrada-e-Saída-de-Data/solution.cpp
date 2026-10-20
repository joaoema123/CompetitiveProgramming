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
    char d0, d1, m0, m1, a0, a1, c;

    cin >> d0 >> d1 >> c >> m0 >> m1 >> c >> a0 >> a1;
    
    cout << m0 << m1 << c << d0 << d1 << c << a0 << a1 << endl;
    cout << a0 << a1 << c << m0 << m1 << c << d0 << d1 << endl;
    cout << d0 << d1 << '-' << m0 << m1 << '-' << a0 << a1 << endl;
    
    return 0;
}
