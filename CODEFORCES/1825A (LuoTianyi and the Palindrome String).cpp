#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define str string
#define See_U_Again___BYE return 0;

void solve()
{
    str S;
    cin >> S;
    ll Mark = 0, len = S.size(), lenX = len - 1;
    for (int i = 1; i < len; i++)
    {
        if (S[0] == S[i])
        {
            Mark++;
        }
    }
    if (Mark == lenX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << len - 1 << endl;
    }
}

Nice_To_Meet_U
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    See_U_Again___BYE
}
