#include <iostream>
using namespace std;

int main()
{
    int t, i, x, y, z;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int count = 0;
        cin >> x >> y >> z;
        while (1)
        {
            if (x > y)
            {
                y = y + x;
                count++;
            }
            else
            {
                x = x + y;
                count++;
            }
            if (x > z || y > z)
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
