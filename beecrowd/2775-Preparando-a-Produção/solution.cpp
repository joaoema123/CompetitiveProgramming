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
    int n;

    while (cin >> n)
    {
        int numeros[n];
        map<int, int> tempos;

        for (int i=0; i<n; i++) cin >> numeros[i];
        for (int i=0; i<n; i++){
            int tempo; cin >> tempo;
            // cout << numeros[i] << ' ';
            tempos[numeros[i]] = tempo;
        }

        int soma = 0;
        for (int i=n-1; i>0; i--)
        {
            for (int j=0; j<i; j++)
            {
                if (numeros[j] > numeros[j+1]){
                    soma += tempos[numeros[j]];
                    soma += tempos[numeros[j+1]];

                    int temp = numeros[j];
                    numeros[j] = numeros[j+1];
                    numeros[j+1] = temp;
                }
            }
        }

        cout << soma;
        cout << endl;


    }
    return 0;
}
