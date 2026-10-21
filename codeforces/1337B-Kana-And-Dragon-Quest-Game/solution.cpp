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
    for (int i =0; i<t; i++)
    {
        int x, n, m;
        cin >> x >> n >> m;
        bool status = false;

        while ((x > 0) && (n > 0 || m > 0))
        {
            // cout << "----------\n";
            // cout << x << endl;
            // cout << n << endl;
            // cout << m << endl;
            // cout << "----------\n";
            if (((x > m*10) && n > 0) || (m <= 0 && n > 0))
            {
                if (x <= 20)
                    break;
                x = x/2 + 10;
                n--;             
            }
            // if ((x > 40 && n > 0) || m <= 0)
            // {
            //     if (x <= 20)
            //         break;
            //     x = x/2 + 10;
            //     n--;
            // }
            else if (m > 0)
            {
                x -= 10;
                m--;
            }
        }

        if (x <= 0) status = true;
        if (status) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

