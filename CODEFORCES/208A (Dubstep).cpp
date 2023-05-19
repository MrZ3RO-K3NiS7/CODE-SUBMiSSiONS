#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define str string
#define See_U_Again___BYE return 0;

void solve()
{
    str S;
    ll Mark = 0;
    cin >> S;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'W' && S[i + 1] == 'U' && S[i + 2] == 'B')
        {
            i = i + 2;
            Mark++;
            if (Mark <= 1)
            {
                cout << " ";
            }
        }
        else
        {
            cout << S[i];
            Mark = 0;
        }
    }
}

Nice_To_Meet_U
{
    solve();

    See_U_Again___BYE
}
