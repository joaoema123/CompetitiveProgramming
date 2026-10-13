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
    vector<int> sobrinhos(3);

    while (cin >> sobrinhos[0] >> sobrinhos[1] >> sobrinhos[2])
    {
        int h, z;
        h = sobrinhos[0];
        z = sobrinhos[1];

        sort(sobrinhos.begin(), sobrinhos.end());

        if (sobrinhos[1] == h) cout << "huguinho";
        else if (sobrinhos[1] == z) cout << "zezinho";
        else cout << "luisinho";
        cout << endl;
    }
    return 0;
}
