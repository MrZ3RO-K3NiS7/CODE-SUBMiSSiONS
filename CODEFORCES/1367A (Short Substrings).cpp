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
    ll len = S.size();
    cout << S[0];
    for (int i = 1; i < len - 1; i = i + 2)
    {
        cout << S[i];
    }
    cout << S[len - 1] << endl;
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
