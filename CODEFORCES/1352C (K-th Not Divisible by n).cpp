#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll t, N, K, X;
    cin >> t;
    while (t--)
    {
        cin >> N >> K;
        X = N - 1;
        if (K % X == 0)
        {
            cout << K / X * N - 1 << endl;
        }
        else
        {
            cout << K / X * N + K % X << endl;
        }
    }
    See_U_Again___BYE
}
