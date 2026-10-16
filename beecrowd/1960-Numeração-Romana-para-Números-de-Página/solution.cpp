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
    int num; cin >> num;
    int c = num / 100;
    if (c != 0)
    {
        if (c == 1) cout << 'C';
        else if (c == 2) cout << "CC";
        else if (c == 3) cout << "CCC";
        else if (c == 4) cout << "CD";
        else if (c == 5) cout << "D";
        else if (c == 6) cout << "DC";
        else if (c == 7) cout << "DCC";
        else if (c == 8) cout << "DCCC";
        else if (c == 9) cout << "CM";
    }
    int d = (num%100)/10;
    if (d != 0)
    {
        if (d == 1) cout << 'X';
        else if (d == 2) cout << "XX";
        else if (d == 3) cout << "XXX";
        else if (d == 4) cout << "XL";
        else if (d == 5) cout << "L";
        else if (d == 6) cout << "LX";
        else if (d == 7) cout << "LXX";
        else if (d == 8) cout << "LXXX";
        else if (d == 9) cout << "XC";      
    }
    int u = num%10;
    if (u != 0)
    {
        if (u == 1) cout << 'I';
        else if (u == 2) cout << "II";
        else if (u == 3) cout << "III";
        else if (u == 4) cout << "IV";
        else if (u == 5) cout << "V";
        else if (u == 6) cout << "VI";
        else if (u == 7) cout << "VII";
        else if (u == 8) cout << "VIII";
        else if (u == 9) cout << "IX";      
    }
    cout << endl;
}
