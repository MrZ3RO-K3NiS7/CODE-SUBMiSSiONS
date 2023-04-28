#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll N, T;
    cin >> N >> T;
    if (N == 1 and T == 10)
    {
        cout << -1;
    }
    else
    {
        N = N - 1;
        if (T == 10)
        {
            N--;
        }
        cout << T;
        while (N--)
        {
            cout << 0;
        }
    }
    See_U_Again___BYE
}
