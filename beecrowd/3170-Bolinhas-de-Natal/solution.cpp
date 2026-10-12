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
    int b, g;
    cin >> b >> g;
   
    int dif = g/2 - b;

    if (dif > 0) cout << "Faltam " << dif << " bolinha(s)";
    else cout << "Amelia tem todas bolinhas!";
    cout << endl;
    return 0;
}
