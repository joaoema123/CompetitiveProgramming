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
    
    int xf, yf, xi, yi, vi, r1, r2;
    while(cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2)
    {
        // distância entre as coordenadas do fiddlestick e do invasor
        double dist_ao_quadrado = (xf-xi)*(xf-xi)+(yf-yi)*(yf-yi);
        double dist_entre_os_dois = sqrt(dist_ao_quadrado);
        // distância que o invasor vai percorrer
        double dist_inv = vi*1.5;
        // maior distância que o fiddlestick consegue acertar o ataque
        int dist_fid = r1+r2;

        // se o invasor estiver mais distante do que o fiddlestick consegue
        // atacar
        if (dist_entre_os_dois+dist_inv>dist_fid) cout << 'N';
        else cout << 'Y';
        cout << endl;
    }

    
    return 0;
}
