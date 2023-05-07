#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

void solve()
{
    ll X, Y, Z, Q, MX = INT_MIN, MN = INT_MAX, HiGH = 0, Mark;
    cin >> X >> Y;
    for (int i = X; i <= Y; i++)
    {
        Q = i;
        ll arr[20], j = 0;
        while (Q > 0)
        {
            Z = Q % 10;
            Q = Q / 10;
            arr[j++] = Z;
        }
        ll MX = *max_element(arr, arr + j);
        ll MN = *min_element(arr, arr + j);
        if (HiGH <= (MX - MN))
        {
            HiGH = MX - MN;
            Mark = i;
        }
        if (HiGH == 9)
        {
            break;
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
