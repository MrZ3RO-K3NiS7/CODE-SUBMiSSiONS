#include <iostream>
using namespace std;

int main()
{
    int t, X, Y, Z, C, MX, Q;
    cin >> t;
    while (t--)
    {
        cin >> X >> Y >> Z >> C;

        MX = max(max(X, Y), Z);

        Q = (MX - X) + (MX - Y) + (MX - Z);

        if ((Q <= C) && ((C - Q) % 3 == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
