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
    vector<bool> primo(10000000, true);

    for (int i=1; i<= 10000000; i++)
        for(int j=2; j*j<i; j++)
        {
            if (i % j == 0) 
            {
                primo[i-1]=false;
                break;
            }
        }

    for (int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;

    }
    return 0;
}
