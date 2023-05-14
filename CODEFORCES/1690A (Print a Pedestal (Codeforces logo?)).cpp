#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

void solve()
{
    ll N, X, Y, Z;
    cin >> N;
    if (N % 3 == 0)
    {
        X = (N / 3) + 1;
        Y = N / 3;
        Z = N - (Y + X);
    }
    else
    {
        X = (N / 3) + 2;
        Y = (N / 3) + 1;
        Z = N - (X + Y);
        if (Z == 0)
        {
            Y--;
            Z++;
        }
    }
    cout << Y << " " << X << " " << Z << endl;
}

Nice_To_Meet_U
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    See_U_Again___BYE
}
