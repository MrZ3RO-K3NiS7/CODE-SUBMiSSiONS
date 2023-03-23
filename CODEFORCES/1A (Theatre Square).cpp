#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main()
{
    ll x, y, z;
    cin >> x >> y >> z;
    if (x * y <= z * z)
    {
        cout << "1";
    }
    else
    {
        x = ceil(x * 1.0 / z);
        y = ceil(y * 1.0 / z);
        cout << x * y;
    }
    return 0;
}
