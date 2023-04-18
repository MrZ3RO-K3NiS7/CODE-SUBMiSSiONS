#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    ll t, N, X;
    cin >> t;
    while (t--)
    {
        cin >> N;
        X = sqrtl(N-1);
        if (N <= 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << X << endl;
        }
    }
    return 0;
}
