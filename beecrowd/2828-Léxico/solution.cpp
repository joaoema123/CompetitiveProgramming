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
    vector<string> palavras(2);

    cin >> palavras[0] >> palavras[1];
    sort(palavras.begin(), palavras.end());
    cout << palavras[0] << endl << palavras[1] << endl;
    return 0;
}
