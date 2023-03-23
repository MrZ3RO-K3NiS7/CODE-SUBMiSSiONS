#include <iostream>
using namespace std;

int main()
{
    int t, i, x, y, z, mx = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> x >> y >> z;
        mx = max(x, max(y, z));
        if (x == y && y == z && z == x)
        {
            x = 1;
            y = 1;
            z = 1;
        }
        else if (x == y && x == mx)
        {
            x = 1;
            y = 1;
            z = mx - z + 1;
        }
        else if (y == z && mx == y)
        {
            x = mx - x + 1;
            y = 1;
            z = 1;
        }
        else if (z == x && z == mx)
        {
            x = 1;
            y = mx - y + 1;
            z = 1;
        }
        else if (x == mx)
        {
            x = 0;
            y = mx - y + 1;
            z = mx - z + 1;
        }
        else if (y == mx)
        {
            x = mx - x + 1;
            y = 0;
            z = mx - z + 1;
        }
        else if (z == mx)
        {
            x = mx - x + 1;
            y = mx - y + 1;
            z = 0;
        }
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}
