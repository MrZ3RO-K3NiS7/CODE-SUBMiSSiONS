#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, i, x, y, z;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int C = 0;
        cin >> x >> y;
        if (x == y)
        {
            C = 0;
        }
        else if (x > y)
        {
            z = x - y;
            C = ceil(z * 1.0 / 10);
        }
        else if (x < y)
        {
            z = y - x;
            C = ceil(z * 1.0 / 10);
        }
        cout << C << endl;
    }
    return 0;
}
