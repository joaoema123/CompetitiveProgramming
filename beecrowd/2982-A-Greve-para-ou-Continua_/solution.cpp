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
    int gastos = 0;
    int verba = 0;

    for (int i=0; i<n; i++)
    {
        char tipo;
        int valor;
        cin >> tipo >> valor;
        if (tipo == 'G') gastos += valor;
        else verba += valor;
    }

    if (gastos > verba) cout << "NAO VAI TER CORTE, VAI TER LUTA!";
    else cout << "A greve vai parar.";
    cout << endl;
    return 0;
}
