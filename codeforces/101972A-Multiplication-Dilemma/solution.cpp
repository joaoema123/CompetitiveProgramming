#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a; cin >> a;
        int b; cin >> b;
        int z, w;

        // tanto a quanto b não são números especiais
        if (((a > 10 && (a % 10) != 0)) && ((b > 10 && (b % 10) != 0)))
        {
            // 74 x 25 = 1850
            // 2 37 5 5
            // condição de parada: a ou b forem espciais
            // condição do loop: a e b forem não especiais
            while (((a > 10) && ((a%10) != 0)) && ((b > 10) && ((b%10) != 0)))
            {
                
            }
        }

        if (a*b >= 0)
        {
            if (a < 0) a = -a;
            if (b < 0) b = -b;

            if (a%10+a > a)
            {
                // 74 x 20
                // 80 x 20 - 6 x 20
                z = a - a%10 + 10;
                w = b;
                cout << z << " x " << b;
                cout << " - ";
                z = z - a;
                cout << z << " x " << w;
            }
            else{
                // 60 x 12
                // -8 x 60 + 60 x 20;
                z = b%10 - 10;
                w = a;
                cout << z << " x " << w;
                cout << " + ";
                z = a;
                w = b - b%10 + 10;
                cout << z << " x " << w;
            }
        }
        else
        {
            if (b < 0)
            {
                a = -a;
                b = -b;
            }
            if (1)
            {
                a = -a;
                if (a%10+a > a)
                {
                    // -74 x 20
                    // -80 x 20 + 6 x 20
                    z = a - a%10 + 10;
                    w = b;
                    cout << -z << " x " << b;
                    cout << " + ";
                    z = z - a;
                    cout << z << " x " << w;
                }
                else{
                    // -60 x 12
                    // 8 x 60 - 60 x 20;
                    z = b%10 - 10;
                    w = a;
                    cout << -z << " x " << w;
                    cout << " - ";
                    z = a;
                    w = b - b%10 + 10;
                    cout << z << " x " << w;
                }
            }

        }
        cout << endl;
    }
        
}

