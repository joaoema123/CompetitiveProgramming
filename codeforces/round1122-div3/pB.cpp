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
        /*
        casos possíveis:
         - alice: pegar uma pedra diminui a diferença
                  pegar uma pedra aumenta a diferença
         - bob:   pegar uma pedra diminui a diferença
                  pegar uma pedra aumenta a diferença
        */
        vector<long long> v(3);
        cin >> v[0] >> v[1] >> v[2];
        if (abs(v[0]+v[2]-v[1]) > abs(v[0]-v[1]))
            cout << abs(v[0]+v[2]-v[1]);
        else cout << abs(v[0]-v[1]);
        cout << endl;
   
    }
    return 0;
}
