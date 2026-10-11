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
    vector<int> numeros;

    for(int i=0; i<n; i++)
    {
        int num; cin >> num;
        numeros.push_back(num);
    }

    int novo_num = *max_element(numeros.begin(), numeros.end()) + 1;
    int i = 0;

    while (i != n)
    {
        if (gcd(numeros[i], novo_num) == 1) i++;
        else
        {
            i = 0;
            novo_num++;
        }
    }

    cout << novo_num << endl;
    return 0;
}
