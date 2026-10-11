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
    int n, g;
    cin >> n >> g;

    map<char, int> runas;
    for (int i=0; i<n; i++)
    {
        char runa;
        int amizade;
        cin >> runa >> amizade;
        runas[runa] = amizade;
    }

    int x;
    cin >> x;
    int valor_total = 0;
    for (int i=0; i<x; i++)
    {
        char runa;
        cin >> runa;
        valor_total += runas[runa];
    }

    cout << valor_total << endl;
    if (valor_total >= g) cout << "You shall pass!";
    else cout << "My precioooous";
    cout << endl;
    return 0;
}
