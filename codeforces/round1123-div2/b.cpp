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

    for(int i=0; i<t; i++)
    {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> modes(n, 0);
        vector<int> max_sum(n);
        
        for (int j=0; j<n; j++) 
        {
            cin >> a[j];
            modes[a[j]]++;
        }

        int cont = 0;
        bool pri = true;
        for (int j=0; j<n; j++)
        {
            if (modes[*max_element(a.begin(), a.end())] > 0)
            {
                if (pri)
                {
                    max_sum[j]=a[*max_element(a.begin(), a.end())];
                }
            }
        }
    }
    return 0;
}

// 4 4 2 1 3 1
// 4 3 2 1 4 1
