#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

void solve()
{
    ll N, Mark = 0;
    cin >> N;
    while (N > 1)
    {
        if (N % 6 == 0)
        {
            N = N / 6;
            Mark++;
        }
        else
        {
            N = N * 2;
            Mark++;
        }
    }
    if (N == 1)
    {
        cout << Mark << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
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
