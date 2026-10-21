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

    for (int i=0; i<n; i++)
    {
        int m; cin >> m;
        vector<int> impares;

        for (int j=0; j<m; j++)
        {
            int num; cin >> num;
            if (num % 2 == 1) impares.push_back(num);
        }

        sort(impares.begin(), impares.end(), greater<>());

        int pri = 0;
        int ult = impares.size()-1;
        for (int j=0; j < (int)impares.size(); j++)
        {
            cout << impares[j];
            if (j != impares.size()-1)
            {
                cout << ' ';
                
            }
        }
    }
    return 0;
}

// 9 7 5 3 1
// 9 7 5 3
