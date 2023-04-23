#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll t, N, X, Y, Z, Mark;
    cin >> t;
    while (t--)
    {
        Mark = 0;
        cin >> N >> X >> Y;
        Z = N;
        while (Mark != X)
        {
            N = (N / 2) + 10;
            Mark++;
        }
        if (N <= Y * 10 || Z <= Y * 10)
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
