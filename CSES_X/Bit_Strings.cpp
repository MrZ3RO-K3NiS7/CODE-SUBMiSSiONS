#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000000007

int main()
{
    ll N, i, X = 1;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        X = (X * 2) % M;
    }
    cout << X;
    return 0;
}