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
    string frase;

    while (getline(cin, frase))
    {
        int idx = frase.find(',');
        
        for (int i=0; i < idx; i++) cout << frase[i];
        cout << endl;
        for (int i=idx+1; i < frase.size(); i++) cout << frase[i];
        cout << endl;
    }
    return 0;
}
