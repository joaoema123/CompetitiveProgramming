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
    int h, m;

    while (cin >> h >> m)
    {
        int qt = (h*60)/m;
        double valores[qt];
        double soma = 0;

        for (int i=0; i<qt; i++)
        {
            cin >> valores[i];
            soma += valores[i];
        }

        double media = soma / qt;

        soma = 0;
        for (int i=0; i<qt; i++)
            soma += (valores[i]-media)*(valores[i]-media);

        double precisao = sqrt(soma / (qt-1));

        cout << fixed << setprecision(5) << precisao << endl;
    }
    return 0;
}
