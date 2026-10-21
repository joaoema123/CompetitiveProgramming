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
        int coins = 0;
        int n; cin >> n;
        char c; cin >> c;
        string s; cin >> s;
        for(int j=0; j<n/2; j++)
        {
            if(s[j] != s[n-1-j])
            {
                if(s[j] == c || s[n-1-j] == c)
                    coins++;
                else coins += 2;
            }
        }
        cout << coins << endl;
    }
    return 0;
}
