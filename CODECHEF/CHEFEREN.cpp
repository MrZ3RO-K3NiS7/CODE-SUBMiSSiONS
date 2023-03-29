#include <iostream>
using namespace std;

int main()
{
    int t, x, y, z, o, e;
    
    cin >> t;

    while (t--)
    {
        cin >> x >> y >> z;

        e = x / 2;
        o = x - e;

        cout << e * y + o * z << endl;
    }
    return 0;
}
