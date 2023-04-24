#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll N, i, arr[111], Z = 0, O = 0, MX = INT_MIN;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            Z++;
        }
        if (arr[i] == 1)
        {
            Z--;
            O++;
        }
        MX = max(MX, Z);
        if (Z < 0)
        {
            Z = 0;
        }
    }
    cout << MX + O;

    See_U_Again___BYE
}
