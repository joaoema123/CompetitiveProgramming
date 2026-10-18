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
        char caracter, final;
        bool failure = false;
        string placa; getline(cin >> ws, placa);
        
        if (placa.size() != 8) failure = true;
        //cout << "placa = " << placa << endl;
        for (int j=0; j<placa.size(); j++)
        {
            caracter = placa[j];
            //cout << "j = " << j << " caracter = " << caracter << endl;
            if (j < 3)
            {
                if (!(caracter >= 'A' && caracter <= 'Z')) failure = true;
            }
            else if (j == 3)
            {
                if (caracter != '-') failure = true;
            }
            else if (j < 8)
            {
                if (!(caracter >= '0' && caracter <= '9')) failure = true;
                else if (j == 7) final = caracter;
            }
            else failure = true;
        }

        if (failure) cout << "FAILURE";
        else {
            switch (final)
            {
            case '1':
                cout << "MONDAY";
                break;
            case '2':
                cout << "MONDAY";
                break;
            case '3':
                cout << "TUESDAY";
                break;
            case '4':
                cout << "TUESDAY";
                break;
            case '5':
                cout << "WEDNESDAY";
                break;
            case '6':
                cout << "WEDNESDAY";
                break;
            case '7':
                cout << "THURSDAY";
                break;
            case '8':
                cout << "THURSDAY";
                break;
            case '9':
                cout << "FRIDAY";
                break;
            case '0':
                cout << "FRIDAY";
                break;
            default:
                cout <<"default";
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
