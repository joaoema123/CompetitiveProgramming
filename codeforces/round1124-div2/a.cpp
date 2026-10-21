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
    
    int t; cin >> t;
    for (int i=0; i<t; i++)
    {
        int n, k;
        int total;
        cin >> n >> k;
        total = pow(2, n-k+1);
        total += 2*(k-1);
        cout << total << endl;
    }
    return 0;
}
