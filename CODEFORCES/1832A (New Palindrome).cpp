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
    ll X = S.size(), Mark = 0, Y = X / 2;
    for (int i = 0; i < Y; i++)
    {
        if ((S[i] != S[i + 1]) && ((i + 1) < Y))
        {
            Mark = 1;
            break;
        }
    }
    if (Mark == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

Nice_To_Meet_U
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    See_U_Again___BYE
}
