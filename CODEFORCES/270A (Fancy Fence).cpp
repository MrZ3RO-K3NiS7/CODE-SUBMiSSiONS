#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll t, N, X;
    cin >> t;
    while (t--)
    {
        cin >> N;
        X = 360 % (180 - N);
        if (X == 0)
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
