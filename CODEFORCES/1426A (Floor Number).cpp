#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, X, Y, Z;
    cin >> t;
    while (t--)
    {
        cin >> X >> Y;
        if (X <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            Z = ceil((X - 2) * 1.0 / Y);
            cout << Z + 1 << endl;
        }
    }
    return 0;
}
