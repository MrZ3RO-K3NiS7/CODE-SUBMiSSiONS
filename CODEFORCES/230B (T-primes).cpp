#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000000;
bool C[MAXN + 1];
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll t, N, X;
    cin >> t;
    C[0] = C[1] = false;
    for (int i = 2; i <= MAXN; i++)
    {
        C[i] = true;
    }
    for (int i = 2; i * i <= MAXN; i++)
    {
        if (C[i])
        {
            for (int j = i * i; j <= MAXN; j += i)
            {
                C[j] = false;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        cin >> N;
        X = sqrt(N);
        if (N == 1 || (X * X != N) || !C[X])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    See_U_Again___BYE
}
