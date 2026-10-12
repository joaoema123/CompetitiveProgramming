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
    int h, e, a, o, w, x;
    cin >> h >> e >> a >> o >> w >> x;
    cout << (h+e+a+x > o + w ? "Middle-earth is safe." : "Sauron has returned.");
    cout << endl;
    return 0;
}
