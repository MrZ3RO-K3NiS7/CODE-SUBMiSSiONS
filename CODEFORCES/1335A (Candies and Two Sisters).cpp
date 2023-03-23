#include <iostream>
using namespace std;

int main()
{
    int t, i, x;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int y = 0;
        cin >> x;
        if (x > 2)
        {
            if (x % 2 == 0)
            {
                y = (x / 2) - 1;
            }
            else
            {
                y = (x / 2);
            }
        }
        cout << y << endl;
    }
    return 0;
}
