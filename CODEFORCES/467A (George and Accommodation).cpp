#include <iostream>
using namespace std;

int main()
{
    int t, i, x, y, count = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> x >> y;
        if (x + 2 <= y)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
