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
    int a, b;
    cin >> a >> b;
    int resto, quociente;
    if (b == 0)
    {
        quociente = 0;
        resto = a;
        cout << quociente << ' ' << resto << endl;
        return 0;
    }

    resto = a % b;
    quociente = a / b;
    if (resto == 0)
    {
        cout << quociente << ' ' << resto << endl;
        return 0;
    }
    else if (a < 0 && b > 0)
    {
        quociente--;
        resto = a-(quociente*b);
    }
    else if (a < 0 && b < 0)
    {

        quociente++;
        resto = a-(quociente*b);
    }

    cout << quociente << ' ' << resto << endl;
    return 0;
}
