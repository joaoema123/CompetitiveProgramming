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
    map<char, int> especies = {
        {'X', 0}, {'H', 0}, {'E', 0},
        {'A', 0}, {'M', 0}
    };

    cin >> n;

    while (n--)
    {
        string a;
        char b;
        cin >> a >> b;
        especies[b]++;
    }

    cout << especies['X'] << " Hobbit(s)" << endl;
    cout << especies['H'] << " Humano(s)" << endl;
    cout << especies['E'] << " Elfo(s)" << endl;
    cout << especies['A'] << " Anao(oes)" << endl;
    cout << especies['M'] << " Mago(s)" << endl;

    return 0;
}
