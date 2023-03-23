#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x = 0, y = 0, z = 0, max = 0, W = 0;
    for (int i = 0; i < t; i++)
    {
        int p, q;
        cin >> p >> q;
        x = x + p;
        y = y + q;
        z = abs(x - y);
        if (x > y && z > max)
        {
            max = z;
            W = 1;
        }
        else if (x < y && z > max)
        {
            max = z;
            W = 2;
        }
    }
    cout << W << " " << max << endl;

    return 0;
}
