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
        int n; cin >> n;
        ll soma1 = 0;
        ll soma2 = 0;

        // 1 2 3 4 5 6 - 65 - 38 
        for (int j=1; j<= n/2; j = j+2)
        {
            soma1 += pow(2, j);
            soma2 += pow(j, j+1);
            soma1 += pow(2, n-j+1);
            soma2 += pow(2, n-j);
        }
    }
    return 0;
}
