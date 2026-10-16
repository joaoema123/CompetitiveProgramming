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
    
    int c, n;

    while (cin >> c >> n)
    {
        cin.ignore();
        string a, b;
        getline(cin, a);
        getline(cin, b);
        map<char, char> cifra;

        // cria as cifras
        for (int i=0; i<a.size(); i++)
        {
            cifra[a[i]]=b[i];
            cifra[b[i]]=a[i];
            if ((a[i] >= 'A' && a[i] <= 'Z') && (b[i] >= 'A' && b[i] <= 'Z'))
            {
                cifra[(char)(a[i]+32)] = (char)(b[i]+32);
                cifra[(char)(b[i]+32)] = (char)(a[i]+32);
            }
            // b[i] é caracter especial
            else if (a[i] >= 'A' && a[i] <= 'Z')
            {
                cifra[(char)(a[i]+32)] = b[i];
            }
            // a[i] é caracter especial
            else if (b[i] >= 'A' && b[i] <= 'Z')
            {
                cifra[(char)(b[i]+32)] = a[i];
            }
        }

        // cada linha
        for (int i=0; i < n; i++)
        {
            string linha;
            getline(cin, linha);
            for (int j=0; j<linha.size(); j++)
            {
                if (cifra.find(linha[j]) != cifra.end())
                {
                    // caracter especial imprime a cifra minúscula
                    if (((linha[j] < 'A' || linha[j] > 'Z') && (linha[j] < 'a' || linha[j] > 'z')))
                        cout << (char)(cifra[linha[j]]+32);
                    else cout << cifra[linha[j]];
                }
                else cout << linha[j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
