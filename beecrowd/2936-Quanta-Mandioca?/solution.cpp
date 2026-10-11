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
    int total = 0;
    for(int i=0; i<5; i++)
    {
        int a; cin >> a;
        switch(i)
        {
            case 0:
                total += 300*a;
                break;
            case 1:
                total += 1500*a;
                break;
            case 2:
                total += 600*a;
                break;
            case 3:
                total += 1000*a;
                break;
            case 4:
                total += 150*a;
                break;
            default:
                break;
        }
    }

    cout << total + 225 << endl;
    return 0;
}
