#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll t, N, X, Y;
    cin >> t;
    while (t--)
    {
        cin >> N;
        X = N % 2020;
        Y = N / 2020;
        if (X <= Y && N >= 2020)
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
