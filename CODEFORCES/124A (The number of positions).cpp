#include <iostream>
using namespace std;

int main()
{
    int x, y, z, count;
    cin >> x >> y >> z;
    if (y + z < x)
    {
        count = z + 1;
    }
    else if (y + z > x)
    {
        count = x - y;
    }
    else
    {
        count = z;
    }
    cout << count;
    return 0;
}
