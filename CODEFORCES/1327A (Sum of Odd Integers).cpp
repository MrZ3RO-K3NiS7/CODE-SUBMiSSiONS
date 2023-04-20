#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll t, X, Y, Z, Q;
    cin >> t;
    while (t--)
    {
        cin >> X >> Y;
        Z = Y * Y;
        Q = X + Y;
        if (X >= Z && Q % 2 == 0)        
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    See_U_Again___BYE
}
