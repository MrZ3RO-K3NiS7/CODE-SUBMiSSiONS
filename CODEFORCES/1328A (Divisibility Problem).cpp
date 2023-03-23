#include <iostream>
using namespace std;

int main()
{
    int t, i, x, y, z;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> x >> y;
        z = x % y;
        if (z == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << y - z << endl;
        }
    }
    return 0;
}
