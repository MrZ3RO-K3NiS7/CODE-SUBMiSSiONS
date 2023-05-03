#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

void solve()
{
    ll N, M, S = 0;
    cin >> N >> M;
    ll arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for (int i = 0; i < M; i++)
    {
        if (arr[i] < 0)
        {
            S = S - arr[i];
        }
    }
    cout << S << endl;
}

Nice_To_Meet_U
{
    solve();

    See_U_Again___BYE
}
