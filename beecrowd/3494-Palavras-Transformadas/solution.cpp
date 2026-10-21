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
    map<char, int> dist = {
        {'o', 12}, {'p', 11}, {'q', 10}, {'r', 9},
        {'s', 8}, {'t', 7}, {'u', 6}, {'v', 5}, {'w', 4}, {'x', 3},
        {'y', 2}, {'z', 1} 
    };

    string s, t;
    cin >> s >> t;

    int custo = 0;

    for (int i=0; i<s.size(); i++)
    {
        if (s[i] != t[i])
        {
            if (abs(s[i]-t[i]) > 13) {
                if (t[i] > 112)
                    custo += dist[t[i]] + (s[i]-'a');
                else custo += dist[s[i]] + (t[i]-'a');                    
            }
            else custo += abs(s[i]-t[i]);
        }
    }

    cout << custo << endl;
    return 0;
}
/*
0 1 2 3 4 5 6 7 8 9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
*/

// 5+5+
