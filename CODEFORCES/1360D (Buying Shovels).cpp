#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll t, N, K, i, X;
    cin >> t;
    while (t--)
    {
        cin >> N >> K;
        X = N;
        if (N <= K)
        {
            cout << 1 << endl;
        }
        else
        {
            for (i = 2; i <= sqrt(N); i++)
            {
                if (N % i == 0)
                {
                    if (i <= K)
                    {
                        X = min(X, N / i);
                    }
                    if (N / i <= K)
                    {
                        X = min(X, i);
                    }
                }
            }
            cout << X << endl;
        }
    }
    See_U_Again___BYE
}
