#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

void solve()
{
    ll N;
    cin >> N;
    pair<int, int> prr[N];
    int X[N], Y[N], Z[N], J = 0, K = 0, L = 0;
    int C10 = 0, C01 = 0, C11 = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> prr[i].first >> prr[i].second;
        if (prr[i].second == 10)
        {
            C10++;
            X[J++] = prr[i].first;
        }
        if (prr[i].second == 11)
        {
            C11++;
            Y[K++] = prr[i].first;
        }
        if (prr[i].second == 01)
        {
            C01++;
            Z[L++] = prr[i].first;
        }
    }
    sort(X, X + J);
    sort(Y, Y + K);
    sort(Z, Z + L);
    if (C11 > 0)
    {
        if (C01 > 0 && C10 > 0)
        {
            cout << min(Y[0], X[0] + Z[0]) << endl;
        }
        else
        {
            cout << Y[0] << endl;
        }
    }
    else if (C11 == 0)
    {
        if (C01 > 0 && C10 > 0)
        {
            cout << X[0] + Z[0] << endl;
        }
        else
        {
            cout << "-1" << endl;
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
