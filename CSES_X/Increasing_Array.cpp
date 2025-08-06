#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll i, N, C = 0;
    cin >> N;
    ll arr[N];
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < N - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            C = C + (arr[i] - arr[i + 1]);
            arr[i + 1] = arr[i];
        }
    }
    cout << C << endl;
    return 0;
}