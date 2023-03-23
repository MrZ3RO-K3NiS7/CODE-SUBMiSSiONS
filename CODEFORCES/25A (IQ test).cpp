#include <iostream>
using namespace std;

int main()
{
    int t, i, N[111], E = 0, O = 0, X, Y;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> N[i];
        if (N[i] % 2 == 0)
        {
            E++;
            X = i;
        }
        else if (N[i] % 2 != 0)
        {
            O++;
            Y = i;
        }
    }
    if (E == 1)
    {
        cout << X;
    }
    else if (O == 1)
    {
        cout << Y;
    }
    return 0;
}
