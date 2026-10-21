#include <bits/stdc++.h>
using namespace std;

// Aqui  ́e definida a macro "_", que ser ́a colocado mais na frente no c ́odigo
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
    
    vector<int> v(10);

    v = {10, 2, 1, 6, 4, 7, 8, 9, 3, 5};

    for(int i=0; i<10; i++) cout << v[i] << ' ';
    cout << endl;
    
    sort(v.begin(), v.end());
    for(int i=0; i<10; i++) cout << v[i] << ' ';
    cout << endl;

    sort(v.begin(), v.end(), greater<>());
    for(int i=0; i<10; i++) cout << v[i] << ' ';
    cout << endl;

    sort(v.begin(), v.begin() + 5);
    for(int i=0; i<10; i++) cout << v[i] << ' ';
    cout << endl;
}
