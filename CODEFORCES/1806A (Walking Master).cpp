#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c, d, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        x = a - c;
        y = d - b;
        z = x + y;
        if (y >= 0 && z >= 0)
        {
            cout << y + z << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
