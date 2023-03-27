#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll N;
    cin >> N;
    cout << N;
    while (N > 1)
    {
        if (N % 2 == 0)
        {
            N = N / 2;
        }
        else
        {
            N = (N * 3) + 1;
        }
        cout << " " << N;
    }
    return 0;
}
