#include <iostream>
using namespace std;

int main()
{
    int t, i, x, y, z;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int count = 1;
        cin >> x >> y >> z;
        x = x - z;
        while (x > 0)
        {
            x = x - y;
            count++;
            if (x <= 0)
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
