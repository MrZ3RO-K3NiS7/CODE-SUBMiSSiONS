#include <iostream>
using namespace std;

int main()
{
    int x, y, z, C;

    cin >> x >> y >> z;

    if (x > y && y > z || x < y && y < z)
    {
        C = abs((x - y) + (y - z));
    }
    else if (x > z && z > y || x < z && z < y)
    {
        C = abs((x - z) + (z - y));
    }
    else if (y > x && x > z || y < x && x < z)
    {
        C = abs((y - x) + (x - z));
    }

    cout << C;

    return 0;
}
