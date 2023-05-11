#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

void solve()
{
    ll t, N, Mark = 0, Div, Store = 0;
    cin >> t >> N;
    ll a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    sort(a, a + t);
    reverse(a, a + t);
    for (int i = 0; i < t; i++)
    {
        Div = N / a[i];
        if (t - Store >= Div + 1)
        {
            Store = Store + Div + 1;
            Mark++;
        }
        else
        {
            break;
        }
    }
    cout << Mark << endl;
}

Nice_To_Meet_U
{
    solve();

    See_U_Again___BYE
}
