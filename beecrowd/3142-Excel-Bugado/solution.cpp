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
    string col;
    while (cin >> col)
    {
        int pos = 0;

        if (col.size() > 3)
        {
            cout << "Essa coluna nao existe Tobias!" << endl;
            continue;
        }

        for (int i=0; i<col.size(); i++)
        {
            if (col.size()== 3){
                if (i == 0) pos += (col[0] - 64)*pow(26, 2);
                else if (i == 1) pos += (col[1]-64)*pow(26, 1);
                else pos += col[2]-64;
            }
            else if (col.size() == 2){
                if (i == 0) pos += (col[0] - 64)*pow(26, 1);
                else if (i == 1) pos += (col[1]-64)*pow(26, 0);
            }
            else{
                pos += col[0]-64;
            }
        }

        if (pos > 16384) cout << "Essa coluna nao existe Tobias!";
        else cout << pos;
        cout << endl;
        //cout << pos << endl;
    }
    return 0;
}
