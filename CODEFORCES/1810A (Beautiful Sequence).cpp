#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll t, N, i, X, Mark;
    cin >> t;
    while (t--)
    {
        cin >> N;
        Mark = 0;
        for (i = 1; i <= N; i++)
        {
            cin >> X;
            if (X <= i)
            {
                Mark = 1;
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
    See_U_Again___BYE
}
