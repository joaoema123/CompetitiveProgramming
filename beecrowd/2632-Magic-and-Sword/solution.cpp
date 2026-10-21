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
    int t; cin >> t;

    for (int i=0; i<t; i++)
    {
        int w, h, x0, y0;
        cin >> w >> h >> x0 >> y0;
        string magia;
        int n, cx, cy;
        cin >> magia >> n >> cx >> cy;

        set<pair<int, int>> coordenadas_dano;

        for (int i=0; i<=h; i++)
            for (int j=0; j<=w; j++)
            {
                coordenadas_dano.insert({x0+i, y0+i});
            }

        set<pair<int, int>> coordenadas_ataque;

        if (magia == "fire")
        {
            if (n == 1)
            {
                int x_ini, y_ini;
                x_ini = cx-20;
                y_ini = cy-20;
                for (int i=0; i<=20+cy; i++)
                    for (int j=0; j<=20+cx; j++)
                    {
                        coordenadas_ataque.insert({})
                    }
            }
        }

    }
    return 0;
}
