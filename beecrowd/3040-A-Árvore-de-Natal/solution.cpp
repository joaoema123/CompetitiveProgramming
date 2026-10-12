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
    int n; cin >> n;
    for (int i=0; i<n; i++)
    {
        int h, d, g;
        cin >> h >> d >> g;
        if ((h >= 200 && h <= 300) && d >= 50 && g >= 150) cout << "Sim";
        else cout << "Nao";
        cout << endl;
    }
    return 0;
}
