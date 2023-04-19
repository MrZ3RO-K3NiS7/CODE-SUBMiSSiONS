#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, N, M, P = 0;
    cin >> t;
    while (t--)
    {
        cin >> N;
        if (N == 50)
        {
            cout << 0 << endl;
        }
        else
        {
            M = 0;
            while (N % 2 != 0 || N > 50)
            {
                N = N - 3;
                M++;
            }
            P = (50 - N) / 2;
            cout << M + P << endl;
        }
    }
    return 0;
}
