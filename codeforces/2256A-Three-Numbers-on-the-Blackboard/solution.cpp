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
        int a, b, c;
        cin >> a >> b >> c;
        long long menor_dif = INF;
        long long dif = max(a, b, c) - min(a, b, c);
        int j = 0;
        while (dif < menor_dif)
        {
            for (int k = j; k < 3; k++)
                if ()
        }

    }  
    return 0;
}

