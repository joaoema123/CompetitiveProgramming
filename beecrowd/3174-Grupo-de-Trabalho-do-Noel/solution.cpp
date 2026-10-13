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
    // boneco, arquiteto, musico e desenhista
    int totalB, totalA, totalM, totalD;
    totalB = totalA = totalM = totalD = 0;

    for (int i=0; i<n; i++)
    {
        string e, g;
        short h;

        cin >> e >> g >> h;

        if (g == "bonecos") totalB += h;
        else if (g == "arquitetos") totalA += h;
        else if (g == "musicos") totalM += h;
        else totalD += h;

    }

    cout << totalB / 8 + totalA / 4 + totalM / 6 + totalD / 12 << endl;
    return 0;
}
