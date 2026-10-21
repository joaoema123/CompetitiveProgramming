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
        int n, x;
        vector<int> pilhas(n);
        
        cin >> n >> x;
        for (int j=0; j<n; j++) cin >> pilhas[j];
        sort(pilhas.begin(), pilhas.end(), greater<int>());

        int j = 0;
        int roubo = 0;
        int g = gcd(pilhas[j], x);
        // 9 9 4 4 4 4 4
        while (j < n)
        {
            for (int k=0; k<n; k++)
            {
                g = gcd(pilhas[k], x);
                
            }

            if ((pilhas[j] > 0) && (g != 1))
            {
                pilhas[j] -= g;
                x = g;
                roubo += g;
            }
            j++;
            g = gcd(pilhas[j], x);
        }
        cout << roubo << endl;   
    }

    return 0;
}
