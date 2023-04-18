#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll t, A, B, N, X, Q, R, S;
    cin >> t;
    while (t--)
    {
        cin >> A >> B >> N >> X;
        Q = X / N;
        R = min(Q, A);
        S = X - (N * R);
        if (S <= B)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    See_U_Again___BYE
}
