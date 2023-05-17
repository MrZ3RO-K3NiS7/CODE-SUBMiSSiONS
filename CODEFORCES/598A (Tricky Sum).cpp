#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

void solve()
{
    ll N, M = 0, S;
    cin >> N;
    S = (N * (N + 1)) / 2;
    for (int i = 1; i <= N; i = i * 2)
    {
        M = M + i;
    }
    M = M * 2;
    cout << S - M << endl;
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
