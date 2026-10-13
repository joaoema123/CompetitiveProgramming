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

    if (n % 2 == 0){
        cout << n/2 *n << " casas brancas e " << n/2 *n << " casas pretas" << endl;
    }
    else{
        cout << (n/2 + 1)*(n/2+1) + (n/2)*(n/2) << " casas brancas e " << (n/2+1)*(n/2) + (n/2)*(n/2+1) << " casas pretas" << endl;
    }
    return 0;
}
