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
    int n, m;
    cin >> n >> m;
    while(n--)
    {
        string fruta; cin >> fruta;
        for(int i=0; i<fruta.size();i++)
        {
            if (i < 3) cout << "Sheldon come a fruta ";
            else cout << "Sheldon detesta a fruta ";
            cout << (fruta[i] < 97 ? (char)(fruta[i]+32) : (char)fruta[i]);
        }
        cout << endl;
    }
    return 0;
}
