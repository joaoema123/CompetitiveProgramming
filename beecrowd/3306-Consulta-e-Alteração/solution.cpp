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
    int n, q;

    while (cin >> n >> q)
    {
        vector<int> vetor(n);
        for (int i=0; i<n; i++) cin >> vetor[i];

        for (int i=0; i < q; i++)
        {
            int tipo, a, b;
            cin >> tipo >> a >> b;
            if (tipo == 1)
            {
                int v; cin >> v;
                for (int j = a-1; j < b; j++) vetor[j]+=v;
            }
            else{
                int mdc = vetor[a-1];
                for (int j = a; j < b; j++)
                {
                    mdc = gcd(mdc, vetor[j]);
                }
                cout << mdc << endl;
            }
        }
    }
    return 0;
}
