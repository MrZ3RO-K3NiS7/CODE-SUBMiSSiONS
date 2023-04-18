#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
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
    return 0;
}
