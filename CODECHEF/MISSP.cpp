#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

void solve()
{
    ll N, X;
    cin >> N;
    int arr[111111] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> X;
        arr[X]++;
    }
    for (int i = 0; i < 111111; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << i << endl;
            break;
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
