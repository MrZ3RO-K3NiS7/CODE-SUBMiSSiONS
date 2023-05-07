#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

void solve()
{
    ll N, Sum = 1;
    cin >> N;
    for (ll i = 1;; i++)
    {
        Sum = Sum + pow(2, i);
        if (N % Sum == 0)
        {
            cout << N / Sum << endl;
            break;
        }
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
