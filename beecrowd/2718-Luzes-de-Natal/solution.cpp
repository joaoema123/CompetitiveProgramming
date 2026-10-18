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
    while (n--)
    {
        ll num; cin >> num;
        int seq = 0;
        int maior_seq = 0;
        while (num!= 0)
        {
            if (num%2 == 1)
            {
                seq++;
            }
            else seq = 0;
            if (seq > maior_seq) maior_seq=seq;
            num /= 2;
        }
        cout << maior_seq << endl;
    }
    return 0;
}
