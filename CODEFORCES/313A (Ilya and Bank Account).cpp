#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define str string
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    str N, M;
    ll i, K, X, Y, Z, MX, Q = 0;
    cin >> N;
    K = N.size();
    X = stoi(N);
    if (X >= 0)
    {
        cout << X;
    }
    else
    {
        for (i = 0; i < K; i++)
        {
            Y = N[K - 2] - '0';
            Z = N[K - 1] - '0';
        }
        MX = max(Y, Z);
        for (i = K; i >= 0; i--)
        {
            if (N[i] - '0' == MX)
            {
                Q = i;
                break;
            }
        }
        N.erase(Q, 1);
        int TR = stoi(N);
        if (TR == -0)
        {
            cout << 0;
        }
        else
        {
            cout << N << endl;
        }
    }
    See_U_Again___BYE 
}
