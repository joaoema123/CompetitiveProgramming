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
    string linha;
    bool dentro = false;

    while(getline(cin, linha))
    {
        if (linha.find("<body>") != string::npos)
        {
            dentro = true;
            continue;
        }
        else if (linha.find("</body>") != string::npos)
        {
            dentro = false;
            continue;
        }
        if (dentro) cout << linha << endl;
        
    }
    return 0;
}
