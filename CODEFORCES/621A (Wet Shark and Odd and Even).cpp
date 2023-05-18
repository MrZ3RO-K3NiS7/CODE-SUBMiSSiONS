#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

void solve()
{
    ll N;
    cin >> N;
    ll arr[N + 1], Sum = 0, MN = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        Sum = Sum + arr[i];
        if (arr[i] > 0 && arr[i] % 2 != 0)
        {
            MN = min(MN, arr[i]);
        }
    }
    if (Sum % 2 == 0)
    {
        cout << Sum << endl;
    }
    else
    {
        cout << Sum - MN << endl;
    }
}

Nice_To_Meet_U
{
    solve();

    See_U_Again___BYE
}
