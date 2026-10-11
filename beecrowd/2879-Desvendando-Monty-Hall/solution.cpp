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
    int n;
    int total = 0;
    cin >> n;
    for (int i=0; i< n; i++)
    {
        int carro; cin >> carro;
        if (carro != 1) total++;
    }

    cout << total << endl;
    return 0;
}
