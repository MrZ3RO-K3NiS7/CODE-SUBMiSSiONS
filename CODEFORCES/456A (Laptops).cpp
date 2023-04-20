#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll t, X, Y, Mark = 0;
    cin >> t;
    while (t--)
    {
        cin >> X >> Y;
        if (X < Y)
        {
            Mark = 1;
            break;
        }
    }
    if (Mark == 0)
    {
        cout << "Poor Alex";
    }
    else
    {
        cout << "Happy Alex";
    }
    See_U_Again___BYE
}
