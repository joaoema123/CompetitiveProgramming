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

ll soma_digitos(ll a)
{
    int soma = 0;
    int b = a;
    while (b != 0)
    {
        a = b % 10;
        b /= 10;
        soma += a*a;
    }
    return soma;
}

int main()
{ _
    
    int t; cin >> t;
    for (int i=0; i<t; i++)
    {
        int n; cin >> n;
        vector<set<ll>> v(n);
        vector<int> num;
        vector<int> q;
        for (int j=0; j<n; j++)
        {
            ll a; cin >> a;
            num.push_back(a);
            q.push_back(0);
            ll cont = 0;
            while (v[j].find(a) == v[j].end())
            {
                cont++;
                v[j].insert(a);
                a = soma_digitos(a);
                if (a == 4) q[j] = cont;
            }
        }

        ll pares = 0;
        for (int j=0; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if ((v[j].find(1) != v[j].end()) && (v[k].find(1) != v[k].end()))
                    pares++;
                else if (q[j] == q[k]) pares++;
            }
        }

        cout << pares << endl;
    }
    return 0;
}

/*
    9 81

*/
