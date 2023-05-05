#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define str string
#define See_U_Again___BYE return 0;

void solve()
{
    ll Mark;
    char S;
    str N, X = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> S >> N;
    for (int i = 0; N[i] != '\0'; i++)
    {
        Mark = X.find(N[i]);
        if (S == 'R')
        {
            cout << X[Mark - 1];
        }
        else
        {
            cout << X[Mark + 1];
        }
    }
}

Nice_To_Meet_U
{
    solve();

    See_U_Again___BYE
}
