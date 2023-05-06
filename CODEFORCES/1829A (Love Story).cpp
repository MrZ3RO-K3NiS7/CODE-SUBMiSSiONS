#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define str string
#define See_U_Again___BYE return 0;

void solve()
{
    str STR;
    cin >> STR;
    int i, Mark = 0;
    for (i = 0; i < 10; i++)
    {
        if (STR[i] != "codeforces"[i])
        {
            Mark++;
        }
    }
    cout << Mark << endl;
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
