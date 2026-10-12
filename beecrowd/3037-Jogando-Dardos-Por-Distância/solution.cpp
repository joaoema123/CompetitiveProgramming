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

    for (int i=0; i<n; i++)
    {
        int total_joao = 0;
        int total_maria = 0;
        for (int j=0; j<2; j++)
        {
            for(int k=0; k<3; k++)
            {
                int x, d;
                cin >> x >> d;
                if (j == 0) total_joao += x*d;
                else total_maria += x*d;
            }
        }
        if (total_joao > total_maria) cout << "JOAO";
        else cout << "MARIA";
        cout << endl;
    }
    return 0;
}
