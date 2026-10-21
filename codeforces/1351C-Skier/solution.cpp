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
    for (int i = 0; i < t; i++)
    {
        string str; cin >> str;
        set<pair<pair<int, int>, pair<int, int>>> posicoes;
        int m, n;
        m = n = 0;
        int tempo = 0;

        for (int j=0; j<(int)str.size(); j++)
        {
            if (str[j] == 'N')
            {
                if (posicoes.find({{m, n}, {m, n+1}}) == posicoes.end())
                {
                    posicoes.insert({{m, n}, {m, n+1}});
                    posicoes.insert({{m, n+1}, {m, n}});
                    tempo += 5;
                }
                else tempo += 1;
                n++;
            }
            else if (str[j] == 'S')
            {
                if (posicoes.find({{m, n}, {m, n-1}}) == posicoes.end())
                {
                    posicoes.insert({{m, n}, {m, n-1}});
                    posicoes.insert({{m, n-1}, {m, n}});
                    tempo += 5;
                }
                else tempo += 1;
                n--;
            }
            else if (str[j] == 'E')
            {
                if (posicoes.find({{m, n}, {m+1, n}}) == posicoes.end())
                {
                    posicoes.insert({{m, n}, {m+1, n}});
                    posicoes.insert({{m+1, n}, {m, n}});
                    tempo += 5;
                }
                else tempo += 1;
                m++;
            }
            else
            {
                if (posicoes.find({{m, n}, {m-1, n}}) == posicoes.end())
                {
                    posicoes.insert({{m, n}, {m-1, n}});
                    posicoes.insert({{m-1, n}, {m, n}});
                    tempo += 5;
                }
                else tempo += 1;
                m--;
            }
        }
        cout << tempo << endl;
    }
    
    return 0;
}
