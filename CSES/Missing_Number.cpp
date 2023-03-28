#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, X, N[222222];
    cin >> t;
    for (i = 1; i < t; i++)
    {
        cin >> X;
        N[X] = i;
    }
    for (i = 1; i <= t; i++)
    {
        if (N[i] == 0)
        {
            cout << i;
        }
    }
    return 0;
}