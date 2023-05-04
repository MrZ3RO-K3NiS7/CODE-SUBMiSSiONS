#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

void solve()
{
    ll N, K, i, Q, Sum = 0;
    cin >> N >> K;
    multiset<ll> X;
    for (i = 0; i < N; i++)
    {
        cin >> Q;
        X.insert(Q);
    }
    for (i = 0; i < K; i++)
    {
        auto last_it = (--X.end());
        Q = *last_it;
        Sum = Sum + Q;
        X.erase(last_it);
        X.insert(Q / 2);
    }
    cout << Sum << endl;
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
